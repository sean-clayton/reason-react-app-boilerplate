type actions =
  | Add
  | Subtract;

let reducer = (state, action) =>
  switch (state, action) {
  | (s, Add) => s + 1
  | (0, Subtract) => 0
  | (s, Subtract) => s - 1
  };

let initialValue = 0;

[@react.component]
let make = (~title) => {
  open React;

  let (count, dispatch) = useReducer(reducer, initialValue);

  <main>
    <h1> title->string </h1>
    <h2> {j|Count is $count|j}->string </h2>
    <button onClick={_ => dispatch(Add)}> "+"->string </button>
    <button onClick={_ => dispatch(Subtract)}> "-"->string </button>
  </main>;
};