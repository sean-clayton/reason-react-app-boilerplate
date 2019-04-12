ReactDOMRe.renderToElementWithId(
  <App title="Reason React App Boilerplate" />,
  "root",
);

type parcelModule;
type hot;
[@bs.val] external parcelModule: parcelModule = "module";
[@bs.get] external hot: parcelModule => Js.nullable(hot) = "hot";
[@bs.send.pipe: hot] external accept: unit => unit = "accept";

switch (Js.Nullable.toOption(parcelModule |> hot)) {
| Some(h) => h |> accept()
| _ => ()
};
