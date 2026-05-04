import { useState, useEffect } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from './assets/vite.svg'
import heroImg from './assets/hero.png'
import './App.css'
import createMathModule from "../main.js" 
function App() {
  const [result, setResult] = useState(null)
  useEffect(() => {
    createMathModule().then((Module) => {
      // Call the exported function using ccall
      const res = Module.ccall('squareNum', 'number', ['number'], [5]);
      setResult(res);
    });
  }, []);
  return (
    <>
      <section id="center">
        <div className="hero">
          <img src={heroImg} className="base" width="170" height="179" alt="" />
          <img src={reactLogo} className="framework" alt="React logo" />
          <img src={viteLogo} className="vite" alt="Vite logo" />
        </div>
        <div>
          <h1>Get started</h1>
          <p>
            Edit <code>src/App.jsx</code> and save to test <code>HMR</code>
          </p>
        </div>
        <div>
          <h2>squareNum(5) = {result}</h2>
        </div>
      </section>
    </>
)}
export default App
