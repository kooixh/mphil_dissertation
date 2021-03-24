import eu.timepit.refined._
import eu.timepit.refined.auto._
import eu.timepit.refined.numeric._
import eu.timepit.refined.api.{RefType, Refined}
import eu.timepit.refined.boolean._
import eu.timepit.refined.char._
import eu.timepit.refined.collection._
import eu.timepit.refined.generic._
import eu.timepit.refined.string._

object RefineTest {
  def main(args: Array[String]): Unit = {

    val l: Int Refined Less[10] = 3
    println("Compile Time Refinement Type Check: " + l)

    val i: Int = -1
    val c: Char = 'c'
    val i1: Either[String, Int Refined Greater[1]] = refineV[Greater[1]](i)
    println("Runtime Refinement Type Check: " + i1.getOrElse("invalid ref predicate"))

  }

}
