module.exports = grammar({
  name: "jas",

  rules: {
    source_file: $ => repeat($.constants),

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
      $.dec_number
    ),

    dec_number: $ => /\d+/
  },
});
