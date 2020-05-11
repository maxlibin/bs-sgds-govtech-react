[@bs.module "sgds-govtech-react"] [@react.component]
external make:
  (
    ~className: string=?,
    ~style: Js.t({..})=?,
    ~isPrimary: bool,
    ~isLoading: bool,
    ~isSecondary: bool,
    ~isOutlined: bool,
    ~isRounded: bool,
    ~buttonSize: string,
    ~isDisabled: bool,
    ~paddingHorizontal: int,
    ~paddingVertical: int,
    ~primaryColor: string,
    ~onClick: ReactEvent.Mouse.t => unit,
    ~colorType: string,
    ~children: React.element=?
  ) =>
  React.element =
  "AccordionSet";