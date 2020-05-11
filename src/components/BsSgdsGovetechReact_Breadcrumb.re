[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (~items: list(Js.t({..})), ~children: React.element=?) => React.element =
  "Breadcrumb";