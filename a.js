const fs = require('fs');  // Dosya işlemleri için 'fs' modülünü dahil ediyoruz.

for (let i = 1; i <= 183; i++) {
    const fileName = `${i}ders.c`;  // Dosya adını oluşturuyoruz (örneğin, 1ders.c).
    
    // Boş bir dosya oluşturuyoruz (dosya zaten varsa üzerine yazmaz).
    fs.writeFile(fileName, '', (err) => {
        if (err) {
            console.error(`Dosya oluşturulamadı: ${fileName}`);
        } else {
            console.log(`Dosya oluşturuldu: ${fileName}`);
        }
    });
}
