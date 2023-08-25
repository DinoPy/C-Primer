const main = async () => {
    const response = await fetch('https://altex.ro/mobila-living-round-20-anrv-rd-antracit-stejar-kronberg-330-x-45-x-192-cm/cpd/MCVLIVROUANRV/')
    const data = await response.text()
    console.log(data)
}

main();