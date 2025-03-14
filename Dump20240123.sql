CREATE DATABASE  IF NOT EXISTS `biblioteka` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `biblioteka`;
-- MySQL dump 10.13  Distrib 8.0.34, for Win64 (x86_64)
--
-- Host: localhost    Database: biblioteka
-- ------------------------------------------------------
-- Server version	8.0.35

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `autorzy`
--

DROP TABLE IF EXISTS `autorzy`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `autorzy` (
  `idautorzy` int NOT NULL AUTO_INCREMENT,
  `imie_Nazwisko` varchar(45) NOT NULL,
  PRIMARY KEY (`idautorzy`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `autorzy`
--

LOCK TABLES `autorzy` WRITE;
/*!40000 ALTER TABLE `autorzy` DISABLE KEYS */;
INSERT INTO `autorzy` VALUES (1,'Tolkien'),(2,'Mickiewicz'),(3,'Orzeszkowa'),(4,'CS Lewis');
/*!40000 ALTER TABLE `autorzy` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `data_utworzenia`
--

DROP TABLE IF EXISTS `data_utworzenia`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `data_utworzenia` (
  `idData_utworzenia` int NOT NULL AUTO_INCREMENT,
  `Login` varchar(45) NOT NULL,
  `Data_utworzenia` datetime NOT NULL,
  PRIMARY KEY (`idData_utworzenia`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `data_utworzenia`
--

LOCK TABLES `data_utworzenia` WRITE;
/*!40000 ALTER TABLE `data_utworzenia` DISABLE KEYS */;
INSERT INTO `data_utworzenia` VALUES (1,'login2','2024-01-21 15:31:48'),(2,'Login3','2024-01-23 13:56:09'),(3,'Login4','2024-01-23 13:56:18'),(4,'admin','2024-01-23 14:17:26');
/*!40000 ALTER TABLE `data_utworzenia` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `do_admina`
--

DROP TABLE IF EXISTS `do_admina`;
/*!50001 DROP VIEW IF EXISTS `do_admina`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `do_admina` AS SELECT 
 1 AS `Tytul`,
 1 AS `imie_Nazwisko`,
 1 AS `Nazwa_kategorii`,
 1 AS `idtytulu`,
 1 AS `idKsiazki`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `do_ocen`
--

DROP TABLE IF EXISTS `do_ocen`;
/*!50001 DROP VIEW IF EXISTS `do_ocen`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `do_ocen` AS SELECT 
 1 AS `Tytul`,
 1 AS `imie_Nazwisko`,
 1 AS `Nazwa_kategorii`,
 1 AS `avg(oceny_ksiazek.Ocena)`,
 1 AS `id`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `do_wypozyczen`
--

DROP TABLE IF EXISTS `do_wypozyczen`;
/*!50001 DROP VIEW IF EXISTS `do_wypozyczen`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `do_wypozyczen` AS SELECT 
 1 AS `Tytul`,
 1 AS `imie_Nazwisko`,
 1 AS `Nazwa_kategorii`,
 1 AS `avg(oceny_ksiazek.Ocena)`,
 1 AS `ile_dostepnych`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `kategorie`
--

DROP TABLE IF EXISTS `kategorie`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `kategorie` (
  `id_kategoria` int NOT NULL AUTO_INCREMENT,
  `Nazwa_kategorii` varchar(45) NOT NULL,
  PRIMARY KEY (`id_kategoria`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `kategorie`
--

LOCK TABLES `kategorie` WRITE;
/*!40000 ALTER TABLE `kategorie` DISABLE KEYS */;
INSERT INTO `kategorie` VALUES (1,'fantasy'),(2,'Powieść historyczna'),(3,'Powieść Obyczajowa'),(4,'Poezja');
/*!40000 ALTER TABLE `kategorie` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `ksiazka_z_ocena`
--

DROP TABLE IF EXISTS `ksiazka_z_ocena`;
/*!50001 DROP VIEW IF EXISTS `ksiazka_z_ocena`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `ksiazka_z_ocena` AS SELECT 
 1 AS `Tytul`,
 1 AS `imie_Nazwisko`,
 1 AS `Nazwa_kategorii`,
 1 AS `avg(oceny_ksiazek.Ocena)`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `ksiazki_fizyczne`
--

DROP TABLE IF EXISTS `ksiazki_fizyczne`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ksiazki_fizyczne` (
  `idKsiazki` int NOT NULL AUTO_INCREMENT,
  `Rodzaj_ksiazki` int NOT NULL,
  `Czy_wypozyczona` tinyint NOT NULL,
  PRIMARY KEY (`idKsiazki`),
  KEY `tytul_idx` (`Rodzaj_ksiazki`),
  CONSTRAINT `tytul` FOREIGN KEY (`Rodzaj_ksiazki`) REFERENCES `ksiazki_tytuly` (`idKsiazki_tytuly`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ksiazki_fizyczne`
--

LOCK TABLES `ksiazki_fizyczne` WRITE;
/*!40000 ALTER TABLE `ksiazki_fizyczne` DISABLE KEYS */;
INSERT INTO `ksiazki_fizyczne` VALUES (1,1,0),(2,1,1),(3,1,0),(4,2,0),(5,4,0),(6,2,0),(7,5,1),(8,5,1),(9,3,0),(10,2,0),(11,4,0);
/*!40000 ALTER TABLE `ksiazki_fizyczne` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `ksiazki_tytuly`
--

DROP TABLE IF EXISTS `ksiazki_tytuly`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ksiazki_tytuly` (
  `idKsiazki_tytuly` int NOT NULL AUTO_INCREMENT,
  `Tytul` varchar(45) NOT NULL,
  `Autor_id` int NOT NULL,
  `Kategoria` int NOT NULL,
  PRIMARY KEY (`idKsiazki_tytuly`),
  UNIQUE KEY `Tytul_UNIQUE` (`Tytul`),
  KEY `autor_idx` (`Autor_id`),
  KEY `kat_idx` (`Kategoria`),
  CONSTRAINT `autor` FOREIGN KEY (`Autor_id`) REFERENCES `autorzy` (`idautorzy`),
  CONSTRAINT `kat` FOREIGN KEY (`Kategoria`) REFERENCES `kategorie` (`id_kategoria`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ksiazki_tytuly`
--

LOCK TABLES `ksiazki_tytuly` WRITE;
/*!40000 ALTER TABLE `ksiazki_tytuly` DISABLE KEYS */;
INSERT INTO `ksiazki_tytuly` VALUES (1,'Hobbit',1,1),(2,'Pan Tadeusz',2,2),(3,'Sonety Krymskie',2,4),(4,'Nad Niemnem',3,3),(5,'Opowieści z Narnii',4,1);
/*!40000 ALTER TABLE `ksiazki_tytuly` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `oceny_ksiazek`
--

DROP TABLE IF EXISTS `oceny_ksiazek`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `oceny_ksiazek` (
  `idOceny_ksiazek` int NOT NULL AUTO_INCREMENT,
  `oceniajacy` varchar(45) NOT NULL,
  `Ocena` decimal(3,2) NOT NULL,
  `id_ksiazki` int NOT NULL,
  PRIMARY KEY (`idOceny_ksiazek`),
  UNIQUE KEY `idOceny_ksiazek_UNIQUE` (`idOceny_ksiazek`),
  KEY `oceniajac_idx` (`oceniajacy`),
  KEY `id_tyt_idx` (`id_ksiazki`),
  CONSTRAINT `id_ksiazki` FOREIGN KEY (`id_ksiazki`) REFERENCES `ksiazki_tytuly` (`idKsiazki_tytuly`),
  CONSTRAINT `oceniajac` FOREIGN KEY (`oceniajacy`) REFERENCES `uzytkownicy` (`Login`)
) ENGINE=InnoDB AUTO_INCREMENT=27 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `oceny_ksiazek`
--

LOCK TABLES `oceny_ksiazek` WRITE;
/*!40000 ALTER TABLE `oceny_ksiazek` DISABLE KEYS */;
INSERT INTO `oceny_ksiazek` VALUES (1,'Login',5.00,1),(6,'Login',4.00,2),(7,'Login',4.50,5),(9,'Login3',5.00,3),(10,'Login3',3.50,2),(11,'Login4',4.00,4),(12,'Login4',4.50,1),(13,'Login2',3.50,1),(14,'Login2',3.50,2),(15,'Login2',3.50,3),(16,'Login2',3.50,4),(17,'Login2',4.50,5),(18,'Login3',4.50,5),(19,'Login3',4.00,1),(20,'Login4',4.00,2),(21,'Login4',3.50,5),(22,'login',2.00,1),(24,'login',3.00,1),(25,'login',5.00,3),(26,'login',4.00,1);
/*!40000 ALTER TABLE `oceny_ksiazek` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `uzytkownicy`
--

DROP TABLE IF EXISTS `uzytkownicy`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `uzytkownicy` (
  `Login` varchar(45) NOT NULL,
  `Haslo` varchar(45) NOT NULL,
  `Imie` varchar(45) NOT NULL,
  `Nazwisko` varchar(45) NOT NULL,
  `adres` varchar(45) NOT NULL,
  `Czy_Admin` tinyint NOT NULL,
  `Saldo_Konta` decimal(8,2) NOT NULL,
  PRIMARY KEY (`Login`),
  UNIQUE KEY `Login_UNIQUE` (`Login`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `uzytkownicy`
--

LOCK TABLES `uzytkownicy` WRITE;
/*!40000 ALTER TABLE `uzytkownicy` DISABLE KEYS */;
INSERT INTO `uzytkownicy` VALUES ('admin','admin','admin','admin','admin',1,0.00),('login','haslo','imie','nazwisko','adres',0,0.00),('login2','haslo2','imie2','nazwisko2','adres2',0,0.00),('Login3','Login3','Login3','Login3','Login3',0,0.00),('Login4','Login4','Login4','Login4','Login4',0,0.00);
/*!40000 ALTER TABLE `uzytkownicy` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `wypozyczenia`
--

DROP TABLE IF EXISTS `wypozyczenia`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `wypozyczenia` (
  `idWypozyczenia` int NOT NULL AUTO_INCREMENT,
  `Wypozyczajacy` varchar(45) NOT NULL,
  `Id_ksiazki` int NOT NULL,
  `Kiedy_wypozyczno` date NOT NULL,
  `DO_kiedy` date NOT NULL,
  `Czy_zwrocona` tinyint NOT NULL,
  PRIMARY KEY (`idWypozyczenia`),
  UNIQUE KEY `idWypozyczenia_UNIQUE` (`idWypozyczenia`),
  KEY `wypozyczajacy_idx` (`Wypozyczajacy`),
  KEY `id_ksiazkifiz_idx` (`Id_ksiazki`),
  CONSTRAINT `id_ksiazkifiz` FOREIGN KEY (`Id_ksiazki`) REFERENCES `ksiazki_fizyczne` (`idKsiazki`),
  CONSTRAINT `wypozyczajacy` FOREIGN KEY (`Wypozyczajacy`) REFERENCES `uzytkownicy` (`Login`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `wypozyczenia`
--

LOCK TABLES `wypozyczenia` WRITE;
/*!40000 ALTER TABLE `wypozyczenia` DISABLE KEYS */;
INSERT INTO `wypozyczenia` VALUES (1,'Login',1,'2024-01-22','2024-02-05',1),(5,'login',7,'2024-01-23','2024-02-06',0),(6,'Login3',2,'2024-01-02','2024-01-16',0),(7,'login',8,'2024-01-23','2024-02-06',0);
/*!40000 ALTER TABLE `wypozyczenia` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `wypozyczenia_view`
--

DROP TABLE IF EXISTS `wypozyczenia_view`;
/*!50001 DROP VIEW IF EXISTS `wypozyczenia_view`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `wypozyczenia_view` AS SELECT 
 1 AS `Id_ksiazki`,
 1 AS `Tytul`,
 1 AS `imie_Nazwisko`,
 1 AS `DO_kiedy`,
 1 AS `Czy_zwrocona`,
 1 AS `login`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `zalegajacy`
--

DROP TABLE IF EXISTS `zalegajacy`;
/*!50001 DROP VIEW IF EXISTS `zalegajacy`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `zalegajacy` AS SELECT 
 1 AS `Imie`,
 1 AS `Nazwisko`,
 1 AS `adres`,
 1 AS `Saldo_Konta`,
 1 AS `zalegle`*/;
SET character_set_client = @saved_cs_client;

--
-- Final view structure for view `do_admina`
--

/*!50001 DROP VIEW IF EXISTS `do_admina`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `do_admina` AS select `ksiazki_tytuly`.`Tytul` AS `Tytul`,`autorzy`.`imie_Nazwisko` AS `imie_Nazwisko`,`kategorie`.`Nazwa_kategorii` AS `Nazwa_kategorii`,`ksiazki_tytuly`.`idKsiazki_tytuly` AS `idtytulu`,`ksiazki_fizyczne`.`idKsiazki` AS `idKsiazki` from (((`ksiazki_tytuly` join `autorzy` on((`autorzy`.`idautorzy` = `ksiazki_tytuly`.`Autor_id`))) join `kategorie` on((`kategorie`.`id_kategoria` = `ksiazki_tytuly`.`Kategoria`))) join `ksiazki_fizyczne` on((`ksiazki_fizyczne`.`Rodzaj_ksiazki` = `ksiazki_tytuly`.`idKsiazki_tytuly`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `do_ocen`
--

/*!50001 DROP VIEW IF EXISTS `do_ocen`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `do_ocen` AS select `ksiazki_tytuly`.`Tytul` AS `Tytul`,`autorzy`.`imie_Nazwisko` AS `imie_Nazwisko`,`kategorie`.`Nazwa_kategorii` AS `Nazwa_kategorii`,avg(`oceny_ksiazek`.`Ocena`) AS `avg(oceny_ksiazek.Ocena)`,`ksiazki_tytuly`.`idKsiazki_tytuly` AS `id` from (((`ksiazki_tytuly` join `autorzy` on((`autorzy`.`idautorzy` = `ksiazki_tytuly`.`Autor_id`))) join `kategorie` on((`kategorie`.`id_kategoria` = `ksiazki_tytuly`.`Kategoria`))) join `oceny_ksiazek` on((`oceny_ksiazek`.`id_ksiazki` = `ksiazki_tytuly`.`idKsiazki_tytuly`))) group by `ksiazki_tytuly`.`idKsiazki_tytuly` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `do_wypozyczen`
--

/*!50001 DROP VIEW IF EXISTS `do_wypozyczen`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `do_wypozyczen` AS select `ksiazki_tytuly`.`Tytul` AS `Tytul`,`autorzy`.`imie_Nazwisko` AS `imie_Nazwisko`,`kategorie`.`Nazwa_kategorii` AS `Nazwa_kategorii`,avg(`oceny_ksiazek`.`Ocena`) AS `avg(oceny_ksiazek.Ocena)`,count(distinct `ksiazki_fizyczne`.`idKsiazki`) AS `ile_dostepnych` from ((((`ksiazki_tytuly` join `autorzy` on((`autorzy`.`idautorzy` = `ksiazki_tytuly`.`Autor_id`))) join `kategorie` on((`kategorie`.`id_kategoria` = `ksiazki_tytuly`.`Kategoria`))) join `oceny_ksiazek` on((`oceny_ksiazek`.`id_ksiazki` = `ksiazki_tytuly`.`idKsiazki_tytuly`))) join `ksiazki_fizyczne` on((`ksiazki_fizyczne`.`Rodzaj_ksiazki` = `ksiazki_tytuly`.`idKsiazki_tytuly`))) group by `ksiazki_tytuly`.`idKsiazki_tytuly` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `ksiazka_z_ocena`
--

/*!50001 DROP VIEW IF EXISTS `ksiazka_z_ocena`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `ksiazka_z_ocena` AS select `ksiazki_tytuly`.`Tytul` AS `Tytul`,`autorzy`.`imie_Nazwisko` AS `imie_Nazwisko`,`kategorie`.`Nazwa_kategorii` AS `Nazwa_kategorii`,avg(`oceny_ksiazek`.`Ocena`) AS `avg(oceny_ksiazek.Ocena)` from (((`ksiazki_tytuly` join `autorzy` on((`autorzy`.`idautorzy` = `ksiazki_tytuly`.`Autor_id`))) join `kategorie` on((`kategorie`.`id_kategoria` = `ksiazki_tytuly`.`Kategoria`))) join `oceny_ksiazek` on((`oceny_ksiazek`.`id_ksiazki` = `ksiazki_tytuly`.`idKsiazki_tytuly`))) group by `ksiazki_tytuly`.`Tytul` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `wypozyczenia_view`
--

/*!50001 DROP VIEW IF EXISTS `wypozyczenia_view`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `wypozyczenia_view` AS select `wypozyczenia`.`Id_ksiazki` AS `Id_ksiazki`,`ksiazki_tytuly`.`Tytul` AS `Tytul`,`autorzy`.`imie_Nazwisko` AS `imie_Nazwisko`,`wypozyczenia`.`DO_kiedy` AS `DO_kiedy`,`wypozyczenia`.`Czy_zwrocona` AS `Czy_zwrocona`,`uzytkownicy`.`Login` AS `login` from ((((`wypozyczenia` join `uzytkownicy` on((`uzytkownicy`.`Login` = `wypozyczenia`.`Wypozyczajacy`))) join `ksiazki_fizyczne` on((`ksiazki_fizyczne`.`idKsiazki` = `wypozyczenia`.`Id_ksiazki`))) join `ksiazki_tytuly` on((`ksiazki_tytuly`.`idKsiazki_tytuly` = `ksiazki_fizyczne`.`Rodzaj_ksiazki`))) join `autorzy` on((`autorzy`.`idautorzy` = `ksiazki_tytuly`.`Autor_id`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `zalegajacy`
--

/*!50001 DROP VIEW IF EXISTS `zalegajacy`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `zalegajacy` AS select `uzytkownicy`.`Imie` AS `Imie`,`uzytkownicy`.`Nazwisko` AS `Nazwisko`,`uzytkownicy`.`adres` AS `adres`,`uzytkownicy`.`Saldo_Konta` AS `Saldo_Konta`,count(`wypozyczenia`.`Id_ksiazki`) AS `zalegle` from (`uzytkownicy` join `wypozyczenia` on((`wypozyczenia`.`Wypozyczajacy` = `uzytkownicy`.`Login`))) where (`wypozyczenia`.`DO_kiedy` < now()) group by `uzytkownicy`.`Login` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2024-01-23 16:22:01
