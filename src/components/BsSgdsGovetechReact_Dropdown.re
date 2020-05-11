[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (~title: string=?, ~isHoverable: bool=?, ~children: React.element=?) =>
  React.element =
  "Dropdown";