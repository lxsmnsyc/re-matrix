/**
 * @license
 * MIT License
 *
 * Copyright (c) 2019 Alexis Munsayac
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *
 * @author Alexis Munsayac <alexis.munsayac@gmail.com>
 * @copyright Alexis Munsayac 2019
 */
type t = (float, float);

let add = ((a1, b1): t, (a2, b2): t) => (a1 +. a2, b1 +. b2);
let (+) = add;

let sub = ((a1, b1): t, (a2, b2): t) => (a1 -. a2, b1 -. b2);
let (-) = sub;

let mul = ((a1, b1): t, (a2, b2): t) => (a1 *. a2, b1 *. b2);
let (*) = mul;

let div = ((a1, b1): t, (a2, b2): t) => (a1 /. a2, b1 /. b2);
let (/) = div;

let abs = ((x, y): t) => (abs_float(x), abs_float(y));

let acos = ((x, y): t) => (acos(x), acos(y));

let acosh = ((x, y): t) => (Utils.acosh(x), Utils.acosh(y));

let asin = ((x, y): t) => (asin(x), asin(y));

let asinh = ((x, y): t) => (Utils.asinh(x), Utils.asinh(y));

let atan = ((x, y): t) => (atan(x), atan(y));

let atanh = ((x, y): t) => (Utils.atanh(x), Utils.asinh(y));

let ceil = ((x, y): t) => (ceil(x), ceil(y));

let clamp = ((ax, ay): t, (bx, by): t, (cx, cy): t) =>
  (Utils.clamp(ax, bx, cx), Utils.clamp(ay, by, cy));

let cos = ((x, y): t) => (cos(x), cos(y));

let cosh = ((x, y): t) => (cosh(x), cosh(y));

let degrees = ((x, y): t) => (Utils.rad2deg(x), Utils.rad2deg(y));

let distance = ((x1, y1): t, (x2, y2): t) => {
  let x = x1 -. y1;
  let y = x2 -. y2;
  
  sqrt((x *. x) +. (y *. y));
}

let dot = ((x1, y1): t, (x2, y2): t) =>
  x1 *. y1 +. x2 *. y2;

let length2 = ((x, y): t) => (x *. x) +. (y *. y);

let length = (v: t) => sqrt(length2(v));
