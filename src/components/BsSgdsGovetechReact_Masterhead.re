[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (
    ~hasLanguageSelector: bool=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Materhead";