CREATE DATABASE IF NOT EXISTS fzg_verwaltung;
USE fzg_verwaltung;

CREATE TABLE IF NOT EXISTS Mitarbeiter 
(
mID INT AUTO_INCREMENT,
Vorname VARCHAR(50) NOT NULL,
Nachname VARCHAR(50) NOT NULL,
Geburtsdatum DATE,
PRIMARY KEY(mID)
);

-- Fremdschlüssel anlegen
CREATE TABLE Firmenwagen(
fID INT NOT NULL AUTO_INCREMENT,
Farbe VARCHAR(10),
Modell VARCHAR(10),
Kennzeichen VARCHAR(10),
hID INT,
PRIMARY KEY (fID),
FOREIGN KEY (hID)
REFERENCES Vertriebshaendler (hID)
);


-- Tabellen anzeigen
SHOW TABLES [FROM fzg_verwaltung] [like '%arbt%']

-- Spalten hinzufügen
ALTER TABLE Mitarbeiter
	ADD Ort VARCHAR(50) DEFAULT 'Zuhause';
	
-- Spalten Löschen
ALTER TABLE Mitarbeiter
	DROP Geburtsdatum;
	
-- Spalten umbenennen
ALTER TABLE Mitarbeiter
	RENAME COLUMN Ort TO Wohnort;
	
-- Datensätze einfügen
INSERT INTO Mitarbeiter (Vorname, Nachname)
VALUES
("Peter", "Pan"),
("Maik", "Rodbiby"),
("Martina", "Hallborn");

-- Anzeigen aller Datensätze in Tabelle
SELECT * FROM Mitarbeiter;

-- Ändern von Datensätzen
UPDATE Mitarbeiter SET Wohnort = "At home"
	WHERE Vorname = "Maik" AND Nachname = "Rodbiby";

-- Datensatz löschen 
DELETE FROM Mitarbeiter WHERE mID=2;



