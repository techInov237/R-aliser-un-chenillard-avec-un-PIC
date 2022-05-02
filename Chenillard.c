void main()
{
unsigned char J = 1;
TRISC = 0; // PORTC est configure en sortie
for(;;) // Boucle sans fin
{
PORTC = J; // Envoyer J au PORTC
Delay_ms(100); // Pause 100 ms
J = J << 1; // Décalage à gauche J
if(J == 0) J = 1; // Si la dernière LED, allumer la 1ère LED
}
}