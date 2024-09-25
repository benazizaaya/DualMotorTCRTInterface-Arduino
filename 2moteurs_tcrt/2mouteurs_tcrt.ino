// Définition des broches pour les capteurs TCRT
const int capteurGauche = A0;
const int capteurDroit = A1;

// Définition des broches pour le driver L298N
const int brocheEnable1 = 9;  // Broche enable pour le moteur gauche
const int brocheEnable2 = 10; // Broche enable pour le moteur droit
const int brocheMoteur1A = 2;  // Broche de commande 1 pour le moteur gauche
const int brocheMoteur1B = 3;  // Broche de commande 2 pour le moteur gauche
const int brocheMoteur2A = 4;  // Broche de commande 1 pour le moteur droit
const int brocheMoteur2B = 5;  // Broche de commande 2 pour le moteur droit

void setup() {
  // Initialisation des broches
  pinMode(capteurGauche, INPUT);
  pinMode(capteurDroit, INPUT);
  pinMode(brocheEnable1, OUTPUT);
  pinMode(brocheEnable2, OUTPUT);
  pinMode(brocheMoteur1A, OUTPUT);
  pinMode(brocheMoteur1B, OUTPUT);
  pinMode(brocheMoteur2A, OUTPUT);
  pinMode(brocheMoteur2B, OUTPUT);
  
  // Activation des moteurs
  digitalWrite(brocheEnable1, HIGH);
  digitalWrite(brocheEnable2, HIGH);
}

void loop() {
  // Lecture des valeurs des capteurs TCRT
  int valeurGauche = analogRead(capteurGauche);
  int valeurDroit = analogRead(capteurDroit);

  // Condition pour ajuster la direction en fonction des capteurs
  if (valeurGauche < 500 && valeurDroit < 500) {
    // Les deux capteurs sont sur la ligne => Avancer
    avancer();
  } else if (valeurGauche < 500) {
    // Capteur gauche sur la ligne => Tourner à gauche
    tournerGauche();
  } else if (valeurDroit < 500) {
    // Capteur droit sur la ligne => Tourner à droite
    tournerDroite();
  } else {
    // Aucun capteur sur la ligne => Arrêt
    arreter();
  }
}

// Fonctions de mouvement
void avancer() {
  digitalWrite(brocheMoteur1A, LOW);
  digitalWrite(brocheMoteur1B, HIGH);
  digitalWrite(brocheMoteur2A,LOW);
  digitalWrite(brocheMoteur2B, HIGH);
}

void tournerGauche() {
  digitalWrite(brocheMoteur1A, LOW);
  digitalWrite(brocheMoteur1B, LOW);
  digitalWrite(brocheMoteur2A, HIGH);
  digitalWrite(brocheMoteur2B, LOW);
}
 
void tournerDroite() {
  digitalWrite(brocheMoteur1A, HIGH);
  digitalWrite(brocheMoteur1B, LOW);
  digitalWrite(brocheMoteur2A, LOW);
  digitalWrite(brocheMoteur2B, LOW);
}

void arreter() {
  digitalWrite(brocheMoteur1A, LOW);
  digitalWrite(brocheMoteur1B, LOW);
  digitalWrite(brocheMoteur2A, LOW);
  digitalWrite(brocheMoteur2B, LOW);
}
