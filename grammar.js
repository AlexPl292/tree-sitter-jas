module.exports = grammar({
  name: "jas",

  rules: {
    source_file: $ => seq(
      optional($.constants),
      $.main_program,
      repeat($.method)
    ),

    main_program: $ => seq(
      '.main',
      optional($.variables),
      repeat($._statement),
      '.end-main'
    ),

    method: $ => seq(
      '.method',
      $.identifier,
      $.parameters,
      optional($.variables),
      repeat($._statement),
      '.end-method',
    ),

    parameters: $ => seq(
      '(',
      optional(seq($.identifier, repeat(seq(',', $.identifier)))),
      ')'
    ),

    variables: $ => seq(
      '.var',
      repeat($.identifier),
      '.end-var'
    ),

    _statement: $ => choice(
      $.command,
      $._number,
      $.identifier
    ),

    command: $ => choice(
      'DUP',
      'IADD',
      'IAND',
      'IOR',
      'IRETURN',
      'ISUB',
      'NOP',
      'POP',
      'SWAP',
      'WIDE',
      'BIPUSH',
      'GOTO',
      'IFEQ',
      'IFLT',
      'IF_ICMPEQ',
      'IINC',
      'ILOAD',
      'INVOKEVIRTUAL',
      'ISTORE',
      'LDC_W',
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
