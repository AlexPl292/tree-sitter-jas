module.exports = grammar({
  name: "jas",

  rules: {
    source_file: $ => seq(
      optional($.constants)
    ),

    constants: $ => seq(
      '.constant',
      repeat($.constant_expression),
      '.end-constant',
    ),

    constant_expression: $ => seq(
      $.identifier, $._number
    ),

    identifier: $ => /[a-z]+/,

    _number: $ => choice(
      $.dec_number,
      $.hex_number,
      $.oct_number,
    ),

    hex_number: $ => /0x\d+/,
    oct_number: $ => /0\d+/,
    dec_number: $ => /\d+/,
  },
});
