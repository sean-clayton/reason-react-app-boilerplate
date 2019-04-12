type actions =
  | Add
  | Subtract;

[@react.component]
let make = _ => {
  let (count, dispatch) =
    React.useReducer(
      (state, action) =>
        switch (state, action) {
        | (s, Add) => s + 1
        | (0, Subtract) => 0
        | (s, Subtract) => s - 1
        },
      0,
    );

  <main>
    <h1> "Reason React App Boilerplate"->React.string </h1>
    <h2> {j|Count is $count|j}->React.string </h2>
    <button onClick={_ => dispatch(Add)}> "+"->React.string </button>
    <button onClick={_ => dispatch(Subtract)}> "-"->React.string </button>
  </main>;
};
