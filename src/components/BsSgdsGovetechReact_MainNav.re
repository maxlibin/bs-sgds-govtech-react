type link = {
  name: string,
  img: option(string),
};

let makeKink = (~name, ~img=None, ()) => {name, img};

[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (~links: list(link)=?, ~children: React.element=?) => React.element =
  "MainNav";