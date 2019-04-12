type actions =
  | Add
  | Subtract;

[@react.component]
let make = _ => {
  open React;

  let (count, dispatch) =
    useReducer(
      (state, action) =>
        switch (state, action) {
        | (s, Add) => s + 1
        | (0, Subtract) => 0
        | (s, Subtract) => s - 1
        },
      0,
    );

  <main>
    <h1> "Reason React App Boilerplate"->string </h1>
    <h2> {j|Count is $count|j}->string </h2>
    <button onClick={_ => dispatch(Add)}> "+"->string </button>
    <button onClick={_ => dispatch(Subtract)}> "-"->string </button>
  </main>;
};
