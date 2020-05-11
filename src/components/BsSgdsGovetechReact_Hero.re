[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (
    ~color: string=?,
    ~title: string=?,
    ~showSearch: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Hero";