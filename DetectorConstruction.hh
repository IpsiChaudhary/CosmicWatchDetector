#ifndef DETECTORCONSTRUCTION_HH
#define DETECTORCONSTRUCTION_HH

#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4ThreeVector.hh"
#include "G4OpticalSurface.hh"
#include "G4LogicalSkinSurface.hh"
#include "G4Tubs.hh"


#include "Detector.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction {
    public:
        MyDetectorConstruction();
        ~MyDetectorConstruction();

        virtual G4VPhysicalVolume *Construct();
    
    private:
        G4LogicalVolume *logicDetector;
        G4LogicalVolume* logicSiPM; 
        virtual void ConstructSDandField();
        G4LogicalVolume* logicScint;
        G4LogicalVolume* logicWorld;
        G4VPhysicalVolume* physWorld;

        G4OpticalSurface *mirrorSurface;
};

#endif