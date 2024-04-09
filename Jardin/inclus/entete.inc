<!DOCTYPE html>
<html lang="fr">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Les jardins</title>
    <link rel="icon" type="image/x-icon" href="" />
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz"
        crossorigin="anonymous"></script>
    <script src="js/javascript.js"></script>
    <link rel="stylesheet" href="css/style.css">
</head>

<body class="">
    <div class="container-fluid" id="container">
        <nav class="navbar bg-success">
            <div class="container-fluid">
                <a class="navbar-brand fs-2 text" href="index.php">Les jardins</a>
                <form class="d-flex" role="search">
                    <input class="form-control me-2" type="search" placeholder="Recherche" aria-label="Search">
                    <button class="btn btn-outline-light" type="submit">Recherche</button>
                </form>
            </div>
        </nav>
        <nav class="navbar navbar-expand-lg bg-success-subtle">
            <div class="container-fluid">
                <button class="navbar-toggler" type="button" data-bs-toggle="collapse"
                    data-bs-target="#navbarNavDropdown" aria-controls="navbarNavDropdown" aria-expanded="false"
                    aria-label="Toggle navigation">
                    <span class="navbar-toggler-icon"></span>
                </button>
                <div class="collapse navbar-collapse" id="navbarNavDropdown">
                    <ul class="navbar-nav">
                        <li class="nav-item">
                            <a class="nav-link active" aria-current="page" href="cartes.php">Cartes des jardins</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="suivie.php">Suivie</a>
                        </li>
                        <li class="nav-item">
                            <a class="nav-link active" href="contact.php">Nous contacter</a>
                        </li>
                        <li class="nav-item dropdown">
                            <a class="nav-link dropdown-toggle active" role="button" data-bs-toggle="dropdown"
                                aria-expanded="false">
                                Astuce
                            </a>
                            <ul class="dropdown-menu">
                                <li><a class="dropdown-item" href="commencer.php">Bien commencer</a></li>
                                <li><a class="dropdown-item" href="entretien.php">Entretiens des plants</a></li>
                                <li><a class="dropdown-item" href="planter.php">Quoi planter</a></li>
                            </ul>
                        </li>
                    </ul>
                </div>
            </div>
        </nav>
        <div class="border border-3 border-success" style="padding : 10px;">
</body>

</html>