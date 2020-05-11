[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (
    ~href: string=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "DropdownItem";