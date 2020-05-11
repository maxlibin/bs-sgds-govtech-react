[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (
    ~header: string=?,
    ~initiallyOpen: bool=?,
    ~isActive: bool=?,
    ~onHeaderClick: ReactEvent.Mouse.t => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "Accordion";