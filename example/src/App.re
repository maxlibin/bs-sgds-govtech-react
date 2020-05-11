open BsSgdsGovtechReact.BsSgdsGovetechReact;

[@react.component]
let make = () =>
  <main>
    <div>
      <AccordionSet>
        <Accordion header="title"> "body"->ReasonReact.string </Accordion>
      </AccordionSet>
      <Brand name="SGDS" link="/" />
    </div>
  </main>;