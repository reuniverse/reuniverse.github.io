module Stars = {
  [@react.component]
  let make = () => {
    <> <div id="stars" /> <div id="stars2" /> <div id="stars3" /> </>;
  };
};

module Logo = {
  [@react.component]
  let make = () => {
    <img className="logo" src="./assets/logo.svg" />;
  };
};

module Tagline = {
  [@react.component]
  let make = () => {
    <>
    <span className="tagline">
      {React.string("Package documentation for the entire Reason ecosystem.")}
    </span>
    <span>
      {React.string("Coming soon!")}
    </span>
    </>;
  };
};

[@react.component]
let make = () => {
  <> <Stars /> <div className="centered"> <Logo /> <Tagline /> </div> </>;
};
