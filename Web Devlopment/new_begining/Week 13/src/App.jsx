import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import { Button } from './components/Buttons'
import { Input } from './components/input'

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
    <div className='h-screen bg-blue-700'>


        <br /><br /><br /><br />
        <Input type="text" placeholder={"Email ID"}></Input>
        <Button disabled={false}>Continue</Button>
      
    </div>
    </>
  )
}

export default App
