name := "scala"

version := "0.1"

scalaVersion := "2.13.4"

libraryDependencies ++= Seq(
  "eu.timepit" %% "refined"                 % "0.9.21",
  "eu.timepit" %% "refined-cats"            % "0.9.21", // optional
  "eu.timepit" %% "refined-eval"            % "0.9.21", // optional, JVM-only
  "eu.timepit" %% "refined-jsonpath"        % "0.9.21", // optional, JVM-only
  "eu.timepit" %% "refined-pureconfig"      % "0.9.21", // optional, JVM-only
  "eu.timepit" %% "refined-scalacheck"      % "0.9.21", // optional
  "eu.timepit" %% "refined-scalaz"          % "0.9.21", // optional
  "eu.timepit" %% "refined-scodec"          % "0.9.21", // optional
  "eu.timepit" %% "refined-scopt"           % "0.9.21", // optional
  "eu.timepit" %% "refined-shapeless"       % "0.9.21"  // optional
)
