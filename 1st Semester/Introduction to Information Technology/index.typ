#set page(
  paper: "a4",
)

#set text(
  size: 14pt,
  hyphenate: false,
)

#let date = ""
#align(center, text(16pt, strong("LAB INDEX")))
#v(10pt)
#(
  table(
    columns: (1fr, 4fr, 1.5fr, 1.5fr),
    inset: 6pt,
    stroke: 0.5pt,

    [*SN*], [*Title of the Experiment*], [*Lab Date*], [*Signature*],

    [1],
    [
      Develop a Bio-Data using MS-Word including: \
      • Tables for Qualification Profile \
      • Header and Footer \
      • Page Number
    ],
    [$#{ date }$],
    [],

    [2],
    [
      Create a document using the following MS-Word functions: \
      • Page Layout \
      • Insert Page Break \
      • Insert Picture and Clip Art \
      • Insert Shapes \
      • Insert Chart
    ],
    [$#{ date }$],
    [],

    [3],
    [
      Develop First Semester Mark Sheet using MS-Excel: \
      • Calculate Total Marks \
      • Calculate Average \
      • Calculate Percentage \
      • Display PASS/FAIL using logical formula \
      • Assign Grade automatically
    ],
    [$#{ date }$],
    [],

    [4],
    [
      Create Salary Worksheet in MS-Excel (Minimum 5 Records): \
      • HRA = 50% of Basic \
      • TA = 10% of Basic \
      • Calculate Gross Pay \
      • Deduct Tax and Other Deductions \
      • Calculate Net Pay
    ],
    [$#{ date }$],
    [],
  )
);

#colbreak();
#(
  table(
    columns: (1fr, 4fr, 1.5fr, 1.5fr),
    inset: 6pt,
    stroke: 0.5pt,

    [*SN*], [*Title of the Experiment*], [*Lab Date*], [*Signature*],

    [5],
    [
      Perform MS-DOS Commands: \
      • Display Directory \
      • Create and Change Directory \
      • Copy Files \
      • Display Date and Time \
      • Show Directory Tree \
      • Clear Screen \
      • List Internal and External Commands
    ],
    [$#{ date }$],

    [],

    [6],
    [
      Create 5-Slide PowerPoint Presentation on IT Topic: \
      • Apply Textured Background \
      • Insert Table \
      • Apply Animations and Slide Effects \
      • Modify Color Scheme \
      • Insert and Recolor Clip Art
    ],
    [$#{ date }$],
    [],

    [7],
    [
      Create a G-mail ID and Write Step-by-Step Procedure
    ],
    [$#{ date }$],
    [],
  )
)
