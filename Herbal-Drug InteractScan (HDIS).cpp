/*"Herbal-Drug InteractScan" (HDIS)
The HDIS App is a user-friendly C++ application designed to provide essential 
information about herbs, medicines, and potential interactions between them. The app offers two main functionalities 
accessible from the main menu:
Herbal Information:
Users can explore a comprehensive list of herbs and their associated properties. The app provides descriptions of each herb, 
including its traditional uses, potential benefits. This section serves as a valuable resource for users seeking to learn 
more about herbal remedies.
Drug-Herb Interaction Analysis:
This feature enables users to select a specific medicine from a list of available options and a corresponding herb from 
another list. The app then analyzes the potential interactions between the chosen drug and herb. By utilizing a 
sophisticated algorithm, the app identifies any potential conflicts, synergies, or contraindications between the 
substances. The analysis provides users with valuable insights into how combining certain drugs and herbs might 
impact their effectiveness or safety.*/

#include <iostream>
#include <string>
using namespace std;

class Herbal {
    private: 
    string lang;
    int herbal;
    
    public:
    void setHerbalName(int herb) {
        herbal = herb;
    }
    void setLanguage(string language) {
        lang = language;
    }
    int getHerbalName() {
        return herbal;
    }
    string getLanguage() {
        return lang;
    }
    void HerbalName() {

        if (lang == "PL" or lang == "pl") {
            cout<<"     Lista ziół"<<endl;
            string herbal_arr[] = {"1) pluskwica groniasta", "2) cayenne pieprz", "3) jeżówka", "4) przęśl", 
            "5) olej z wiesiołka", "6) złocień maruna","7) czosnek", "8) imbir", "9) miłorząb japoński", "10) żeń-szeń", 
            "11) ekstrakt z pestek winogron", "12) pieprz metystynowy", "13) lukrecja", "14) soja", "15) dziurawiec zwyczajny", 
            "16) kozłek lekarski"};
            
            for (int i = 0; i < 16; i++) {
                cout<<herbal_arr[i]<<endl;
            }
        }
        else if (lang == "EN" or lang == "en") {
            cout<<"     List of herbs"<<endl;
            string herbal_arr[] = {"black cohosh", "cayenne pepper", "echinacea", "ephedra", "primrose oil", 
            "feverfew","garlic", "ginger", "ginkgo biloba", "ginseng", "grape seed extract", "kava kava", "licorice", "Soy",
            "st. john’s wort", "valerian"}; 
            
            for (int i = 0; i < 16; i++) {
                cout<<herbal_arr[i]<<endl;
            }
        }
        
    }
    
    void HerbalProperties() {
        
        if (lang == "PL" or lang == "pl") {
            if (herbal == 1) {
                cout<<"                                     pluskwica groniasta"<<endl;
                cout<<"     Pluskwica groniasta łagodzi objawy napięcia przedmiesiączkowego,"<<endl;
                cout<<"     bóle menstruacyjne, ale przede wszystkim pomaga przy dolegliwościach"<<endl;
                cout<<"     związanych z menopauzą."<<endl;
            }
            else if (herbal == 2) {
                cout<<"                                     pieprz cayenne"<<endl;
                cout<<"     właściwości przeciwzapalne – kapsaicyna hamuje działanie neuropeptydu odpowiadającego za stany"<<endl;
                cout<<"                                 zapalne, w związku z tym łagodzi objawy zapalenia stawów;"<<endl;
                cout<<"     właściwości przeciwbólowe – łagodzi ból głowy oraz ból w przebiegu neuropatii cukrzycowej;"<<endl;
                cout<<"     właściwości antyrakowe – kapsaicyna hamuje podział i rozrost komórek rakowych;"<<endl;
            }
            else if (herbal == 3) {
                cout<<"                                     jeżówka"<<endl;
                cout<<"Ekstrakt z jeżówki przyśpiesza przemianę materii, działa immunostymulująco, przeciwbakteryjnie,"<<endl;
                cout<<"przeciwwirusowo, przeciwgrzybiczo, przeciwbólowo, rozkurczowo, żółciotwórczo, żółciopędnie,"<<endl;
                cout<<"napotnie, przeciwgorączkowo, przeciwzapalnie oraz przeciwwysiękowo."<<endl;
            }
            else if (herbal == 4) {
                cout<<"                                     przęśl"<<endl;
                cout<<"Za właściwości rośliny odpowiada wspomniana wcześniej efedryna, która bardzo dobrze wchłania się w"<<endl; 
                cout<<"przewodzie pokarmowym. Jest niezwykle skuteczna w leczeniu astmy oraz niektórych schorzeń układu nerwowego."<<endl;
                cout<<"Działanie tego związku możnaprzedstawić następująco:"<<endl;
                cout<<"- obkurczanie naczyń krwionośnych i wzrost ciśnienia tętniczego krwi;"<<endl;
                cout<<"- pobudzanie syntezy noradrenaliny oraz pobudzanie receptorów obwodowych układu nerwowego;"<<endl;
                cout<<"- obniżanie napięcia mięśni gładkich, szczególnie układu pokarmowego i układu moczowego;"<<endl;
                cout<<"- hamowanie ruchów perystaltycznych jelit i opróżnianie pęcherza moczowego;<<endl;"<<endl;
                cout<<"- podwyższanie pojemności minutowej serca;"<<endl;
                cout<<"- rozszerzanie źrenic."<<endl;
                cout<<"Przede wszystkim przęśl skrzypowata pobudza ośrodkowy układ nerwowy, zwłaszcza korę mózgu."<<endl; 
                cout<<"Zwiększa gotowość i chęć do pracy, dodaje energii, ułatwia zdolność postrzegania, wspiera pamięć"<<endl; 
                cout<<"i koncentrację, a także silnie pobudza ośrodki wegetatywne. Bardzo często wykorzystywana jest jako"<<endl; 
                cout<<"surowiec zielarski w leczeniu nadwagi i otyłości, ponieważ zmniejsza napady głodu i jednocześnie"<<endl; 
                cout<<"stymuluje metabolizm, przyspieszając spalanie tkanki tłuszczowej. W ziołolecznictwie przęśl"<<endl;
                cout<<"skrzypowata znajduje zastosowanie między innymi przy następujących problemach zdrowotnych:"<<endl;
                cout<<"migreny i bóle głowy; katar sienny; astma oskrzelowa; nadwaga i otyłość; zapalenie zatok"<<endl;
                cout<<"i zapalenie dróg oddechowych; przeziębienie i grypa; rozedma płuc; bezsenność; apatia;"<<endl; 
                cout<<"kolka jelitowa. Najczęściej wykonuje się napary, odwary i wywaru z suszonego ziela przęśli skrzypowatej."<<endl;
            }
            else if (herbal == 5) {
                cout<<"                                     olej z wiesiołka"<<endl;
                cout<<"Olejowi z wiesiołka przypisuje się przede wszystkim właściwości obniżające cholesterol i"<<endl;
                cout<<"wzmacniające odporność.Substancje zawarte w olejku z wiesiołka łagodzą bóle reumatyczne,"<<endl; 
                cout<<"przyspieszają gojenie ran oraz pobudzają regenerację tkanki chrzęstnej i łącznej. Kwasy "<<endl; 
                cout<<"z grupy omega mają znaczący wpływ na funkcjonowanie układu odpornościowego i przypisuje się "<<endl; 
                cout<<"im działanie odtruwające – usuwając toksyny z organizmu, wspomagają tworzenie naturalnego "<<endl;
                cout<<" mechanizmu obronnego przed różnymi chorobami. Kwasy nienasycone zawarte w oleju z nasion "<<endl; 
                cout<<"wiesiołka wspomagają również prawidłowe funkcjonowanie układu krążenia, obniżając ciśnienie tętnicze krwi."<<endl; 
                cout<<" Ponieważ są składnikami komórek mózgowych, mają wpływ na funkcjonowanie centralnego układu"<<endl;
                cout<<"nerwowego – wiesiołek wpływa pozytywnie na nastrój, pamięć i sprawne myślenie."<<endl;
            }
            else if (herbal == 6) {
                cout<<"                                     złocień maruna"<<endl;
                cout<<"Od lat złocień wykorzystywany jest jako środek niwelujący bóle migrenowe, menstruacyjne, artretyczne,"<<endl; 
                cout<<"reumatyczne, zębów oraz dolegliwości żołądkowo - jelitowe. Pomaga w prawidłowym funkcjonowaniu układu"<<endl; 
                cout<<"nerwowego. Przeprowadzone badania naukowe wykazały korzyści ze stosowania witaminy B2 w zapobieganiu"<<endl; 
                cout<<"migrenowym bólom głowy. Jest dobrze tolerowana i cechuje się wysokim bezpieczeństwem stosowania."<<endl; 
                cout<<"Przyczynia się do zmniejszenia uczucia zmęczenia i znużenia. Pomaga w utrzymaniu sprawności umysłowej"<<endl; 
                cout<<"na prawidłowym poziomie."<<endl;
            }
            else if (herbal == 7) {
                cout<<"                                     czosnek"<<endl;
                cout<<"Czosnek wspiera układ odpornościowy, wspiera zdrowie serca oraz prawidłowy poziom cholesterolu i homocysteiny."<<endl; 
                cout<<"Pomaga utrzymać równowagę mikrobiologiczną w jelitach i chroni komórki przed stresem oksydacyjnym."<<endl;
                
            }
            else if (herbal == 8) {
                cout<<"                                     imbir"<<endl;
                cout<<"Od niepamiętnych czasów ta ostra przyprawa jest na całym świecie popularnym środkiem na różne dolegliwości"<<endl; 
                cout<<"układu pokarmowego od lekkiej niestrawności i wzdęć po nudności i wymioty. Stosuję się go, aby złagodzić objawy"<<endl; 
                cout<<"grypy i zapalenia stawów. Współczesne badania nad imbirem potwierdzają jego cenioną od tysiącleci skuteczność."<<endl;
            }
            else if (herbal == 9) {
                cout<<"                                     miłorząb japoński"<<endl;
                cout<<"Miłorząb japoński wpływa na prawidłowe krążenie i pracę serca, co pomaga w zwalczeniu ciągłego uczucia"<<endl;
                cout<<"zmęczenia."<<endl;
            }
            else if (herbal == 10) {
                cout<<"                                     żeń-szeń"<<endl;
                cout<<"Substancje czynne tej wyjątkowej rośliny działają bowiem dwukierunkowo z jednej strony zwiększają odporność"<<endl; 
                cout<<"na stres, z drugiej łagodzą jego niekorzystne objawy. Za ten szczególny efekt odpowiadają ginzenozydy,"<<endl; 
                cout<<"które regulują poziom acetylocholiny ważnego neuroprzekaźnika w ośrodkowym układzie nerwowym. Sprzyja to"<<endl; 
                cout<<"dodatkowo poprawie pamięci i zdolności uczenia się. Jednocześnie Ginzenozydy zapobiegają innym niebezpiecznym"<<endl; 
                cout<<"skutkom stresu, jak zaburzenia pracy jelit oraz wrzody żołądka i dwunastnicy."<<endl;
                
            }
            else if (herbal == 11) {
                cout<<"                                     ekstrakt z pestek winogron"<<endl;
                cout<<"Związki ekstraktu z pestek winogron ozytywnie wpływają na zahamowanie procesów starzenia, zapobiegają"<<endl; 
                cout<<"przedwczesnej degradacji komórek, wpływają na polepszenie jakości skóry (jej jędrność i elastyczność,"<<endl; 
                cout<<"pomagają uniknąć przebarwień), powstrzymują wypadanie włosów, sprawdzają się również w leczeniu trądziku"<<endl;
                cout<<"oraz chorób skóry (między innymi łuszczycy)."<<endl;
            }
            else if (herbal == 12) {
                cout<<"                                     pieprz metystynowy"<<endl;
                cout<<"Omawiany surowiec wywiera wpływ na ośrodkowy układ nerwowy . Działanie kavy zależy od przyjętej dawki."<<endl; 
                cout<<"W terapeutycznych dawkach pieprz metystynowy wykazuje szereg pozytywnych działań na organizm człowieka,"<<endl;
                cout<<"w tym: ułatwia zasypianie; poprawia nastrój i jakość snu; podnosi wrażliwość na delikatne dźwięki;"<<endl;
                cout<<"łagodzi stany lękowe; działa przeciwbólowo, przeciwdrgawkowo, rozkurczowo i moczopędnie."<<endl;
            }
            else if (herbal == 13) {
                cout<<"                                     lukrecja"<<endl;
                cout<<"Lukrecja wspomaga układ odpornościowy oraz wspomaga zachować zdrowie jelit oraz przyczynia się do"<<endl; 
                cout<<"prawidłowego funkcjonowania przewodu pokarmowego."<<endl;
            }
            else if (herbal == 14) {
                cout<<"                                     soja"<<endl;
                cout<<"Soja to bogate źródło pełnowartościowego białka, zdrowych kwasów tłuszczowych i fitoestrogenów, które"<<endl; 
                cout<<"mogą łagodzić objawymenopauzy, obniżać poziom ciśnienia i cholesterolu, zapobiegać osteoporozie,"<<endl;
                cout<<"a nawet niektórym nowotworom."<<endl;
            }
            else if (herbal == 15) {
                cout<<"                                     dziurawiec zwyczajny"<<endl;
                cout<<"Dziurawiec zwyczajny wspiera dobre samopoczucie psychiczne i prawidłową równowagę emocjonalną,"<<endl; 
                cout<<"zwłaszcza w sytuacjach stresu i napięcia. Pomaga utrzymać pozytywny nastrój oraz właściwy poziom sił"<<endl; 
                cout<<"witalnych. Dziurawiec wspiera również prawidłowe funkcjonowanie układu pokarmowego oraz dolnych dróg moczowych."<<endl;
            }
            else if (herbal == 16) {
                cout<<"                                     kozłek lekarski"<<endl;
                cout<<"Kozłek lekarski skutecznie zmniejsza poziom lęku, obniża napięcie psychiczne i redukuje uczucie niepokoju."<<endl; 
                cout<<"Niektóre badania wykazują także działanie przeciwdrgawkowe. Jego skuteczność przyrównano nawet do"<<endl;
                cout<<"diazepamu – substancji czynnej wchodzącej w skład szeroko stosowanych leków psychotropowych."<<endl;
            }
            else {
                cout<<"Brak danych."<<endl;
            }
        }
        
        else if (lang == "EN" or lang == "en") {
          if (herbal == 1) {
                cout<<"                                     black cohosh"<<endl;
                cout<<" Staphylococcus eases premenstrual symptoms,"<<endl;
                cout<<" menstrual pain, but especially helps with ailments"<<endl;
                cout<<" associated with menopause."<<endl;
            }
            else if (herbal == 2) {
                cout<<"                                     cayenne pepper"<<endl;
                cout<<" anti-inflammatory properties - capsaicin inhibits a neuropeptide responsible for conditions"<<endl;
                cout<<"                             inflammatory, therefore relieves symptoms of arthritis;"<<endl;
                cout<<" analgesic properties - relieves headache and pain in diabetic neuropathy;"<<endl;
                cout<<" anti-cancer properties - capsaicin inhibits the division and growth of cancer cells;"<<endl;
            }
            else if (herbal == 3) {
                cout<<"                                     Echinacea"<<endl;
                cout<<"Echinacea extract accelerates metabolism, immunostimulant, antibacterial,"<<endl;
                cout<<"antiviral, antifungal, analgesic, diastolic, choleretic, cholagogue,"<<endl;
                cout<<"diaphoretic, antipyretic, anti-inflammatory, and antihypertensive."<<endl;
            }
            else if (herbal == 4) {
                cout<<"                                     Ephedra"<<endl;
                cout<<"For the properties of the plant is responsible for the previously mentioned ephedrine, which is very well absorbed in"<<endl; 
                cout<<"The digestive tract. It is extremely effective in the treatment of asthma and some nervous system disorders."<<endl;
                cout<<"The action of this compound can be described as follows:"<<endl;
                cout<<"- shrinking blood vessels and increasing blood pressure;"<<endl;
                cout<<"- stimulating norepinephrine synthesis and stimulating peripheral nervous system receptors;"<<endl;
                cout<<"- lowering smooth muscle tone, especially of the gastrointestinal and urinary systems;"<<endl;
                cout<<"- inhibiting peristaltic movements of the intestines and emptying the bladder;<<endl;"<<endl;
                cout<<"- increasing the minute capacity of the heart;"<<endl;
                cout<<"- dilating the pupils;"<<endl;
                cout<<"Above all, horsetail spear stimulates the central nervous system, especially the cerebral cortex;"<<endl; 
                cout<<"Increases readiness and willingness to work, adds energy, facilitates perceptive ability, supports memory"<<endl; 
                cout<<"and concentration, and strongly stimulates vegetative centers. It is very often used as"<<endl; 
                cout<<"herbal raw material in the treatment of overweight and obesity, as it reduces hunger attacks and at the same time"<<endl; 
                cout<<"stimulates metabolism, accelerating fat burning. In herbal medicine it sprouts"<<endl;
                cout<<"horsetail is used for the following health problems, among others:"<<endl;
                cout<<"migraines and headaches; hay fever; bronchial asthma; overweight and obesity; sinusitis"<<endl;
                cout<<"and inflammation of the respiratory tract; cold and flu; emphysema; insomnia; apathy;"<<endl; 
                cout<<"intestinal colic. Infusions, decoctions and decoctions of dried horsetail thistle herb are most commonly made."<<endl;
            }
            else if (herbal == 5) {
                cout<<"                                     Evening primrose oil"<<endl;
                cout<<"Evening primrose oil is primarily credited with cholesterol-lowering and"<<endl;
                cout<<"immune-enhancing.Substances in evening primrose oil relieve rheumatic pains,"<<endl; 
                cout<<"accelerate wound healing and stimulate the regeneration of cartilage and connective tissue. Acids"<<endl; 
                cout<<"of the omega group have a significant effect on the functioning of the immune system and are attributed to"<<endl; 
                cout<<"to them a detoxifying effect - by removing toxins from the body, they help create a natural "<<endl;
                cout<<" defense mechanism against various diseases. The unsaturated acids contained in the seed oil"<<endl; 
                cout<<"evening primrose also support the proper functioning of the cardiovascular system, lowering blood pressure"<<endl; 
                cout<<" Since they are components of brain cells, they affect the functioning of the central system"<<endl;
                cout<<"of the nervous system - evening primrose has a positive effect on mood, memory and efficient thinking."<<endl;
            }
            else if (herbal == 6) {
                cout<<"                                     Feverfew"<<endl;
                cout<<"For years, goldenseal has been used as a remedy for migraine pain, menstrual pain, arthritic pain,"<<endl; 
                cout<<"Rheumatic, dental and gastrointestinal ailments. It helps in the proper functioning of the system"<<endl; 
                cout<<"nervous system. Scientific studies have shown the benefits of vitamin B2 in preventing"<<endl; 
                cout<<"migraine headaches. It is well tolerated and has a high safety of use."<<endl; 
                cout<<"Contributes to reducing feelings of fatigue and tiredness. Helps maintain mental performance"<<endl; 
                cout<<"at a normal level."<<endl;
            }
            else if (herbal == 7) {
                cout<<"                                     Garlic"<<endl;
                cout<<"Garlic supports the immune system, supports heart health and normal cholesterol and homocysteine levels."<<endl; 
                cout<<"Helps maintain microbial balance in the gut and protects cells from oxidative stress."<<endl;
                
            }
            else if (herbal == 8) {
                cout<<"                                     Ginger"<<endl;
                cout<<"Since time immemorial, this pungent spice has been a popular remedy around the world for various ailments"<<endl; 
                cout<<"of the digestive system from mild indigestion and bloating to nausea and vomiting. It is used to relieve symptoms"<<endl; 
                cout<<"flu and arthritis. Modern research on ginger confirms its valued efficacy for thousands of years."<<endl;
            }
            else if (herbal == 9) {
                cout<<"                                     Gingko biloba"<<endl;
                cout<<"Ginkgo biloba affects proper circulation and heart function, which helps combat the constant feeling of"<<endl;
                cout<<"tiredness."<<endl;
            }
            else if (herbal == 10) {
                cout<<"                                     Ginseng"<<endl;
                cout<<"This is because the active substances of this unique plant have a two-way effect, on the one hand they increase immunity"<<endl; 
                cout<<"to stress, on the other hand they alleviate its adverse symptoms. Ginsenosides,are responsible for this particular effect;"<<endl; 
                cout<<"which regulate the levels of acetylcholine an important neurotransmitter in the central nervous system. This promotes"<<endl; 
                cout<<"additionally improving memory and learning ability. At the same time, Ginsenosides prevent other dangerous"<<endl; 
                cout<<"effects of stress, such as intestinal disorders and stomach and duodenal ulcers."<<endl;
                
            }
            else if (herbal == 11) {
                cout<<"                                     Grape seed extract"<<endl;
                cout<<"Grape seed extract compounds have a positive effect on inhibition of aging processes, prevent"<<endl; 
                cout<<"premature cell degradation, improve skin quality (its firmness and elasticity,"<<endl; 
                cout<<"help prevent hyperpigmentation), stop hair loss, and are also proven to treat acne"<<endl;
                cout<<"and skin diseases (including psoriasis)."<<endl;
            }
            else if (herbal == 12) {
                cout<<"                                     Kava Kava"<<endl;
                cout<<"The raw material in question has an effect on the central nervous system . The effect of kava depends on the dose taken."<<endl; 
                cout<<"In therapeutic doses, methystine pepper shows a number of positive effects on the human body,"<<endl;
                cout<<"including: facilitates falling asleep; improves mood and sleep quality; increases sensitivity to soft sounds;"<<endl;
                cout<<"relieves anxiety; has analgesic, anticonvulsant, diastolic and diuretic effects;"<<endl;
            }
            else if (herbal == 13) {
                cout<<"                                     Licorice"<<endl;
                cout<<"Licorice supports the immune system and helps maintain intestinal health and contributes to"<<endl; 
                cout<<"proper functioning of the digestive tract."<<endl;
            }
            else if (herbal == 14) {
                cout<<"                                     Soy"<<endl;
                cout<<"Soy is a rich source of complete protein, healthy fatty acids and phytoestrogens, which"<<endl; 
                cout<<"can relieveymenopause symptoms, lower blood pressure and cholesterol, prevent osteoporosis,"<<endl;
                cout<<"and even some cancers."<<endl;
            }
            else if (herbal == 15) {
                cout<<"                                     St. John’s Wort"<<endl;
                cout<<"St. John's wort supports mental well-being and proper emotional balance,"<<endl; 
                cout<<"especially in situations of stress and tension. It helps maintain a positive mood and proper levels of strength"<<endl; 
                cout<<"vitality. St. John's wort also supports the proper functioning of the digestive system and lower urinary tract."<<endl;
            }
            else if (herbal == 16) {
                cout<<"                                     Valerian"<<endl;
                cout<<"Valerian is effective in reducing anxiety, lowering mental tension and reducing feelings of restlessness."<<endl; 
                cout<<"Some studies also show anticonvulsant effects. Its effectiveness has even been compared to"<<endl;
                cout<<"diazepam - an active substance included in widely used psychotropic drugs."<<endl;
            }
            else {
                cout<<"No data available."<<endl;
            }  
        }
    }

    
};

class Medicine {
    private:
    string medicine;
    string lang;
    
    public:
    string getLanguage() {
        return lang;
    }
    void setLanguage(string language) {
        lang = language;
    }
    string getMedicine() {
        return medicine;
    }
    void setMedicine(string med) {
        medicine = med;
    }
    
    void MedicineName() {
        if (lang == "PL" or lang == "pl") {
            cout<<"     Lista leków"<<endl;
            string medicine_arr[] = {
            "1) Estrogen", "2) Warfarin", "3) Dexamethasone", "4) Prednisone", "5) Cyclosporine",
            "6) Pseudoephedrine", "7) Phenylpropanolamine", "8) Phenothiazines", "9) Tricyclic antidepressants",
            "10) Vitamin E", "11) Aspirin", "12) Phenelzine", "13) Digoxin", "14) Hypnotics", "15) Sedatives",
            "16) Cyclosporine", "17) Digoxin", "18) Indinavir", "19) Indopamine", "20) Metolazone", "21) Levothroid",
            "22) Tirosint", "23) Goserelin", "24) Sermorelin"
            };
            for (int i = 0; i < 24; i++) {
                cout<<medicine_arr[i]<<endl;
            }
        }
        else if (lang == "EN" or lang == "en") {
            cout<<"     List of drugs"<<endl;
            string medicine_arr[] = {
            "1) Estrogen", "2) Warfarin", "3) Dexamethasone", "4) Prednisone", "5) Cyclosporine",
            "6) Pseudoephedrine", "7) Phenylpropanolamine", "8) Phenothiazines", "9) Tricyclic antidepressants",
            "10) Vitamin E", "11) Aspirin", "12) Phenelzine", "13) Digoxin", "14) Hypnotics", "15) Sedatives",
            "16) Cyclosporine", "17) Digoxin", "18) Indinavir", "19) Indopamine", "20) Metolazone", "21) Levothroid",
            "22) Tirosint", "23) Goserelin", "24) Sermorelin"
            };
            for (int i = 0; i < 24; i++) {
                cout<<medicine_arr[i]<<endl;
            } 
        }
    }
};

class Interaction : public Herbal, public Medicine {
    private:
    string medic, herbals, language;
    
    public:
    string getLanguage() {
        return language;
    }
    void setLanguage(string lang) {
        language = lang;
    }
    string getHerbal() {
        return herbals;
    }
    void setHerbal(string herbs) {
        herbals = herbs;
    }
    string getMedicine() {
        return medic;
    }
    void setMedicine(string meds) {
        medic = meds;
    }
    
    
    void interaction() {
        if (language == "PL" or language == "pl") {
            if ((medic == "Estrogen" or medic == "Indopamine" or medic == "Metolazone") and herbals == "pluskwica groniasta") {
                cout<<"Interakcja!"<<endl;
                cout<<"Pluskwica groniasta obniża ciśnienie krwi i dlatego może nasilać działanie leków"<<endl; 
                cout<<"na ciśnienie krwi. Może również kolidować z lekami hormonalnymi."<<endl;
            }
            else if (medic == "Warfarin" and herbals == "cayenne pieprz") {
                cout<<"Interakcja!"<<endl;
                cout<<"Cayenne (dawki terapeutyczne) zmniejsza agregację płytek krwi i zwiększa aktywność"<<endl; 
                cout<<"fibrynolityczną, dlatego konieczne jest monitorowanie czasu krwawienia i PT/INR u"<<endl; 
                cout<<"pacjentów przyjmujących leki przeciwpłytkowe i Warfarin."<<endl;
            }
            else if ((medic == "Dexamethasone" or medic == "Prednisone" or medic == "Cyclosporine") and herbals == "jeżówka") {
                cout<<"Interakcja!"<<endl;
                cout<<"Postuluje się, że środki immunostymulujące, takie jak Echinacea, mogą potencjalnie"<<endl; 
                cout<<"kompensować działanie leków hamujących układ odpornościowy"<<endl;
            }
            else if ((medic == "Pseudoephedrine" or medic == "Phenylpropanolamine") and herbals == "przęśl") {
                cout<<"Interakcja!"<<endl;
                cout<<"Przyjmowanie efedryny z innymi stymulantami może zwiększać ryzyko nadciśnienia,"<<endl; 
                cout<<"arytmii, nerwowości, zawału serca lub udaru mózgu."<<endl;
            }
            else if ((medic == "Phenothiazines" or medic == "Tricyclic antidepressants" or medic == "Warfarin") and herbals == "olej z wiesiołka") {
                cout<<"Interakcja!"<<endl;
                cout<<"Może nasilać padaczkę skroniową lub schizofrenię, jeśli jest stosowany z lekami"<<endl; 
                cout<<"obniżającymi próg drgawkowy. Olej z wiesiołka zmniejsza agregację płytek krwi i"<<endl; 
                cout<<"zwiększa aktywność fibrynolityczną, dlatego należy monitorować czas krwawienia i"<<endl; 
                cout<<"PT/INR u pacjentów przyjmujących leki przeciwpłytkowe i warfarynę."<<endl;
            }
            else if (medic == "Warfarin" and herbals == "złocień maruna") {
                cout<<"Interakcja!"<<endl;
                cout<<"Złocień maruna zmniejsza agregację płytek krwi i zwiększa aktywność fibrynolityczną,"<<endl; 
                cout<<"dlatego należy monitorować czas krwawienia i INR u pacjentów przyjmujących leki"<<endl; 
                cout<<"przeciwpłytkowe i warfarynę."<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Indopamine" or medic == "Metolazone") and herbals == "czosnek") {
                cout<<"Interakcja!"<<endl;
                cout<<"Czosnek (w dawkach terapeutycznych) zmniejsza agregację płytek krwi i zwiększa"<<endl; 
                cout<<"aktywność fibrynolityczną, dlatego należy monitorować czas krwawienia i PT/INR"<<endl; 
                cout<<"u pacjentów przyjmujących leki przeciwpłytkowe i warfarynę. Czosnek obniża ciśnienie"<<endl; 
                cout<<"krwi i dlatego może nasilać działanie leków na ciśnienie krwi."<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Indopamine" or medic == "Metolazone") and herbals == "imbir") {
                cout<<"Interakcja!"<<endl;
                cout<<"Imbir (w dawkach terapeutycznych) zmniejsza agregację płytek krwi i zwiększa"<<endl; 
                cout<<"aktywność fibrynolityczną, dlatego należy monitorować czas krwawienia i PT/INR"<<endl; 
                cout<<"u pacjentów przyjmujących leki przeciwpłytkowe i warfarynę. Imbir może zwiększać"<<endl; 
                cout<<"wychwyt wapnia przez mięsień sercowy, a zatem może zmieniać działanie blokerów"<<endl; 
                cout<<"kanału wapniowego."<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Vitamin E" or medic == "Aspirin") and herbals == "miłorząb japoński") {
                cout<<"Interakcja!"<<endl;
                cout<<"Miłorząb działa jako środek rozrzedzający krew, dlatego stosowanie tego środka"<<endl; 
                cout<<"z innymi środkami rozrzedzającymi krew może zwiększać ryzyko udaru lub"<<endl; 
                cout<<"nadmiernego krwawienia. Należy monitorować wartości PT/INR."<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Phenelzine" or medic == "Digoxin") and herbals == "żeń-szeń") {
                cout<<"Interakcja!"<<endl;
                cout<<"Żeń-szeń może wchodzić w interakcje z warfaryną, zmniejszając skuteczność"<<endl; 
                cout<<"warfaryny lub odwracając działanie leku. Należy monitorować wartości PT/INR."<<endl; 
                cout<<"Jednoczesne stosowanie może prowadzić do pobudzenia psychoaktywnego; należy unikać"<<endl; 
                cout<<"jednoczesnego stosowania. Może zaburzać działanie lub monitorowanie digoksyny."<<endl;
            }
            else if (medic == "Warfarin" and herbals == "ekstrakt z pestek winogron") {
                cout<<"Interakcja!"<<endl;
                cout<<"Ekstrakt z pestek winogron zmniejsza agregację płytek krwi i zwiększa aktywność"<<endl;
                cout<<"fibrynolityczną,dlatego należy monitorować czas krwawienia i PT/INR u pacjentów"<<endl; 
                cout<<"przyjmujących leki przeciwpłytkowe i warfarynę."<<endl;
            }
            else if (medic == "Hypnotics" and herbals == "pieprz metystynowy") {
                cout<<"Interakcja!"<<endl;
                cout<<"Pieprz metystynowy może nasilać działanie środków działających depresyjnie na"<<endl; 
                cout<<"ośrodkowy układ nerwowy, powodując nadmierną sedację i śpiączkę. Może również"<<endl;
                cout<<"wywoływać drżenie, nieprawidłowe ruchy lub skurcze mięśni, które mogą zmniejszać"<<endl;
                cout<<"skuteczność leków przeciw chorobie Parkinsona lub nasilać ruchy pozapiramidowe obserwowane"<<endl;
                cout<<"w przypadku leków przeciwpsychotycznych."<<endl;
            }
            else if ((medic == "Indopamine" or medic == "Metolazone") and herbals == "lukrecja") {
                cout<<"Interakcja!"<<endl;
                cout<<"Naturalna lukrecja (nie lukrecja w cukierkach) może podnosić ciśnienie krwi,"<<endl;
                cout<<"przeciwdziałając efektom działania leków na nadciśnienie."<<endl;
            }
            else if ((medic == "Levothroid" or medic == "Tirosint") and herbals == "soja") {
                cout<<"Interakcja!"<<endl;
                cout<<"Dawki terapeutyczne mogą zakłócać wchłanianie dodatkowych hormonów tarczycy - dlatego"<<endl;
                cout<<"dawki należy rozłożyć w odstępie co najmniej dwóch godzin."<<endl;
            }
            else if ((medic == "Cyclosporine" or medic == "Digoxin" or medic == "Indinavir" or "Warfarin") and herbals == "dziurawiec zwyczajny") {
                cout<<"Interakcja!"<<endl;
                cout<<"Jednoczesne podawanie może prowadzić do zmniejszenia stężenia tych leków w surowicy."<<endl;
                cout<<"Należy monitorować stężenie leku w surowicy pod kątem skuteczności/toksyczności."<<endl;
                cout<<"Należy unikać jednoczesnego stosowania indynawiru i dziurawca zwyczajnego."<<endl;
                cout<<"Jednoczesne podawanie może prowadzić do obniżenia INR."<<endl;
            }
            else if (medic == "Hypnotics" and herbals == "kozłek lekarski") {
                cout<<"Interakcja!"<<endl;
                cout<<"Kozłek lekarski może nasilać działanie środków uspokajających, zwłaszcza benzodiazepin"<<endl;
                cout<<"(np. Valium, Xanax)."<<endl;
            }
            else {
                cout<<"Brak interakcji"<<endl;
            }
        }
        else if (language == "EN" or language == "en") {
            if ((medic == "Estrogen" or medic == "Indopamine" or medic == "Metolazone") and herbals == "black cohosh") {
                cout<<"Interaction!"<<endl;
                cout<<"Grapefruit lowers blood pressure and therefore may exacerbate the effects of drugs"<<endl; 
                cout<<"on blood pressure. It may also interfere with hormonal medications."<<endl;
            }
            else if (medic == "Warfarin" and herbals == "cayenne pepper") {
                cout<<"Interaction!"<<endl;
                cout<<"Cayenne (therapeutic doses) reduces platelet aggregation and increases activity"<<endl; 
                cout<<"fibrinolytic activity, so it is necessary to monitor bleeding time and PT/INR in"<<endl; 
                cout<<"patients taking antiplatelet drugs and Warfarin."<<endl;
            }
            else if ((medic == "Dexamethasone" or medic == "Prednisone" or medic == "Cyclosporine") and herbals == "echinacea") {
                cout<<"Interaction!"<<endl;
                cout<<"It is postulated that immunostimulants such as Echinacea can potentially"<<endl; 
                cout<<"compensate for the effects of drugs that suppress the immune system"<<endl;
            }
            else if ((medic == "Pseudoephedrine" or medic == "Phenylpropanolamine") and herbals == "ephedra") {
                cout<<"Interaction!"<<endl;
                cout<<"Taking ephedrine with other stimulants may increase the risk of hypertension,"<<endl; 
                cout<<"arrhythmia, nervousness, heart attack or stroke."<<endl;
            }
            else if ((medic == "Phenothiazines" or medic == "Tricyclic antidepressants" or medic == "Warfarin") and herbals == "primrose oil") {
                cout<<"Interaction!"<<endl;
                cout<<"May aggravate temporal epilepsy or schizophrenia if used with drugs"<<endl; 
                cout<<"that lower the seizure threshold. Evening primrose oil reduces platelet aggregation and"<<endl; 
                cout<<"increases fibrinolytic activity, so monitor bleeding time and"<<endl; 
                cout<<"PT/INR in patients taking antiplatelet drugs and warfarin."<<endl;
            }
            else if (medic == "Warfarin" and herbals == "feverfew") {
                cout<<"Interaction!"<<endl;
                cout<<"Feverfew reduces platelet aggregation and increases fibrinolytic activity,"<<endl; 
                cout<<"Therefore, monitor bleeding time and INR in patients taking medications"<<endl; 
                cout<<"antiplatelet and warfarin."<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Indopamine" or medic == "Metolazone") and herbals == "garlic") {
                cout<<"Interaction!"<<endl;
                cout<<"Garlic (in therapeutic doses) reduces platelet aggregation and increases"<<endl; 
                cout<<"fibrinolytic activity, so monitor bleeding time and PT/INR"<<endl; 
                cout<<"in patients taking antiplatelet drugs and warfarin. Garlic lowers blood pressure"<<endl; 
                cout<<"blood pressure and therefore may exacerbate the effects of blood pressure medications"<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Indopamine" or medic == "Metolazone") and herbals == "ginger") {
                cout<<"Interaction!"<<endl;
                cout<<"Ginger (in therapeutic doses) reduces platelet aggregation and increases"<<endl; 
                cout<<"fibrinolytic activity, so monitor bleeding time and PT/INR"<<endl; 
                cout<<"in patients taking antiplatelet drugs and warfarin. Ginger may increase"<<endl; 
                cout<<"calcium uptake by the heart muscle, and therefore may alter the effect of blockers"<<endl; 
                cout<<"calcium channel."<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Vitamin E" or medic == "Aspirin") and herbals == "Gingko biloba") {
                cout<<"Interaction!"<<endl;
                cout<<"Ginkgo acts as a blood thinner, therefore using this agent"<<endl; 
                cout<<"with other blood thinners may increase the risk of stroke or"<<endl; 
                cout<<"excessive bleeding. PT/INR values should be monitored."<<endl;
            }
            else if ((medic == "Warfarin" or medic == "Phenelzine" or medic == "Digoxin") and herbals == "ginseng") {
                cout<<"Interaction!"<<endl;
                cout<<"Ginseng may interact with warfarin, reducing the effectiveness"<<endl; 
                cout<<"warfarin or reversing the effect of the drug. PT/INR values should be monitored."<<endl; 
                cout<<"Concomitant use may lead to psychoactive agitation; avoid"<<endl; 
                cout<<"concomitant use. May interfere with the action or monitoring of digoxin."<<endl;
            }
            else if (medic == "Warfarin" and herbals == "grapeseed extract") {
                cout<<"Interaction!"<<endl;
                cout<<"Grape seed extract reduces platelet aggregation and increases platelet activity"<<endl;
                cout<<"fibrinolytic,so monitor bleeding time and PT/INR in patients"<<endl; 
                cout<<"taking antiplatelet drugs and warfarin."<<endl;
            }
            else if (medic == "Hypnotics" and herbals == "kava kava") {
                cout<<"Interaction!"<<endl;
                cout<<"Kava kava may aggravate the effects of depressants on"<<endl; 
                cout<<"central nervous system, causing excessive sedation and coma. It can also"<<endl;
                cout<<"cause tremors, abnormal movements or muscle spasms, which can reduce"<<endl;
                cout<<"effectiveness of drugs against Parkinson's disease or exacerbate extrapyramidal movements observed"<<endl;
                cout<<"in the case of antipsychotic drugs."<<endl;
            }
            else if ((medic == "Indopamine" or medic == "Metolazone") and herbals == "licorice") {
                cout<<"Interaction!"<<endl;
                cout<<"Natural licorice (not licorice in candy) can raise blood pressure,"<<endl;
                cout<<"counteracting the effects of high blood pressure medications."<<endl;
            }
            else if ((medic == "Levothroid" or medic == "Tirosint") and herbals == "soy") {
                cout<<"Interaction!"<<endl;
                cout<<"Therapeutic doses may interfere with the absorption of additional thyroid hormones - therefore"<<endl;
                cout<<"doses should be spaced at least two hours apart."<<endl;
            }
            else if ((medic == "Cyclosporine" or medic == "Digoxin" or medic == "Indinavir" or "Warfarin") and herbals == "St. John’s Wort") {
                cout<<"Interaction!"<<endl;
                cout<<"Concomitant administration may lead to decreased serum concentrations of these drugs."<<endl;
                cout<<"Serum concentrations of the drug should be monitored for efficacy/toxicity."<<endl;
                cout<<"Concomitant use of indinavir and St. John's Wort should be avoided."<<endl;
                cout<<"Concomitant administration may lead to lower INR."<<endl;
            }
            else if (medic == "Hypnotics" and herbals == "valerial") {
                cout<<"Interaction!"<<endl;
                cout<<"Valerian can intensify the effects of sedatives, especially benzodiazepines"<<endl;
                cout<<"(e.g. Valium, Xanax)."<<endl;
            }
            else {
                cout<<"No interaction"<<endl;
            }
        }
    }
};



int main()
{
    string language, med, herbs;
    int num, herb;
    
    cout<<"============================================"<<endl;
    cout<<""<<endl;
    cout<<"     Język/Language (PL/EN): "<<endl;
    cin>>language;
    cout<<""<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
    
    Herbal h;
    h.setLanguage(language);
    h.getLanguage();
    Medicine m;
    m.setLanguage(language);
    m.getLanguage();
    Interaction i;
    i.setLanguage(language);
    i.getLanguage();
    
    if (language == "PL" or language == "pl") {
        cout<<"     Herbal-Drug InteractScan"<<endl;
        cout<<"             (HDIS)"<<endl;
        cout<<""<<endl;
        cout<<"             MENU"<<endl;
        cout<<"1) Właściwości ziół"<<endl;
        cout<<"2) Interakcje ziół z lekami"<<endl;
        cout<<""<<endl;
        cout<<"Podaj numer z listy: ";
        cin>>num;
        cout<<""<<endl;
        if (num == 1) {
            cout<<"============================================"<<endl;
            h.HerbalName();
            cout<<"============================================"<<endl;
            cout<<""<<endl;
            cout<<"Podaj numer ziela: ";
            cin>>herb;
            cout<<"==================================================================================================================="<<endl;
            h.setHerbalName(herb);
            h.HerbalProperties();
            cout<<"==================================================================================================================="<<endl;
        }
        else if (num == 2) {
            cout<<"============================================"<<endl;
            h.HerbalName();
            cout<<"============================================"<<endl;
            cout<<""<<endl;
            getline(cin, herbs);
            cout<<"Podaj nazwę ziela z listy: ";
            getline (cin, herbs);
            cout<<"============================================"<<endl;
            m.MedicineName();
            cout<<"============================================"<<endl;
            cout<<""<<endl;
            cout<<"Podaj nazwę leku z listy: ";
            getline (cin, med);
            
            i.setHerbal(herbs);
            i.getHerbal();
            i.setMedicine(med);
            i.getMedicine();
            i.interaction();
        }
        else {
            cout<<"Został wprowadzony nieprawidłowy numer"<<endl;
        }
    }
    else if (language == "EN" or language == "en") {
        cout<<"     Herbal-Drug InteractScan"<<endl;
        cout<<"             (HDIS)"<<endl;
        cout<<""<<endl;
        cout<<"             MENU"<<endl;
        cout<<"1) Properties of herbs"<<endl;
        cout<<"2) Herb-drug interaction"<<endl;
        cout<<""<<endl;
        cout<<"Enter the number from the list: "<<endl;
        cin>>num;
        if (num == 1) {
            cout<<"============================================"<<endl;
            h.HerbalName();
            cout<<"============================================"<<endl;
            cout<<""<<endl;
            cout<<"Enter the herb's number: ";
            cin>>herb;
            cout<<"==================================================================================================================="<<endl;
            h.setHerbalName(herb);
            h.HerbalProperties();
            cout<<"==================================================================================================================="<<endl;
        }
        else if (num == 2) {
            cout<<"============================================"<<endl;
            h.HerbalName();
            cout<<"============================================"<<endl;
            cout<<""<<endl;
            getline(cin, herbs);
            cout<<"Name the herb from the list: ";
            getline (cin, herbs);
            cout<<"============================================"<<endl;
            m.MedicineName();
            cout<<"============================================"<<endl;
            cout<<""<<endl;
            cout<<"Enter the name of the drug from the list: ";
            getline (cin, med);
            cout<<"============================================"<<endl;
            i.setHerbal(herbs);
            i.getHerbal();
            i.setMedicine(med);
            i.getMedicine();
            i.interaction();
            cout<<"============================================"<<endl;
        }
        else {
            cout<<"The wrong number has been entered"<<endl;
        }
    }
    return 0;
}

