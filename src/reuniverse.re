module Stars = {
  [@react.component]
  let make = () => {
    <>
      <div id="stars" />
      <div id="stars2" />
      <div id="stars3" />
      </>;
  };

};

module Backdrop = {
  [@react.component]
  let make = () => {
    <div className="backdrop" />;
  };
};

module Logo = {
  [@react.component]
  let make = () => {
    <img className="logo" src="./logo.svg" />;
  };
};

module Tagline = {
  [@react.component]
  let make = () => {
    <span className="tagline">
      {React.string("Package documentation for the entire Reason ecosystem.")}
    </span>;
  };
};

[@react.component]
let make = () => {
  <> <Backdrop />
  <Stars />
      <div className="centered">
        <Logo /> <Tagline />
        </div>
        </>;
};
