int Whr_InitDay(int n)
{
// ====================================================================
// Day1 11 часов

	Weathers[n].id = "11 Hour";
	Weathers[n].Hour.Min = 11;
	Weathers[n].Hour.Max = 11;
	Weathers[n].Lighting = "day11";
	Weathers[n].LightingLm = "day1";
	Weathers[n].InsideBack = "d";
	//Weathers[n].Sounds.Sea.Postfix = "_day";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\11\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 512.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;
	
	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;
	
	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.001;
	Weathers[n].Fog.IslandDensity = 0.001;
	Weathers[n].Fog.SeaDensity = 0.001;
	//Weathers[n].Fog.Color = argb(0,115,140,155);
	Weathers[n].Fog.Color = argb(0,80,120,155);
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

    Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,160,120,98);
	Weathers[n].Sun.Ambient = argb(0,100,90,80);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	//Weathers[n].Sun.HeightAngle = 0.70;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	Weathers[n].Sun.HeightAngle = 0.70;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunglow_z";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(0, 200, 200, 200);
	Weathers[n].Sun.Flare.Enable = true;
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,2,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.5;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,55,100);
	Weathers[n].Sea.Pena.Color = argb(0,175,175,155);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.05;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,128,55,0);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,200,150);
	Weathers[n].Sea.SunRoad.Power = 0.2;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 2.5, 3.0, 0.0, 10.00";
	Weathers[n].Sea.Harmonics.h2 = "90.0, 5.0, 1.5, 0.0, 50.00";
	Weathers[n].Sea.Harmonics.h3 = "45.0, 8.0, 2.5, 0.0, 200.00";
	Weathers[n].Sea.Harmonics.h4 = "13.0, 6.0, 1.0, 0.0, 150.00";
	Weathers[n].Sea.Harmonics.h5 = "90.0, 50.0, 0.2, 0.0, 20.00";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 0.0; //остроконечность волн
	
	//Weathers[n].Sea2.WaterColor = argb(0, 10, 90, 120);
	//Weathers[n].Sea2.SkyColor = argb(0, 255, 255, 255);

	Weathers[n].Sea2.WaterColor = argb(0,30,55,100);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.5;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 25.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 2.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.17; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "7.0, 0.0, 0.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.0;
	Weathers[n].Sea2.AnimSpeed2 = 10.0;
	Weathers[n].Sea2.Scale2 = 2.0;
	Weathers[n].Sea2.MoveSpeed2 = "0.0, 0.0, -1.0";	

	Weathers[n].Sea2.FoamK = 0.05;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 10.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.3; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 7.0;
	Weathers[n].Wind.Speed.Max = 14.0;
	// Weathers[n].Sea2.Amp1 = 100.0; //амплитуда 1 волны
	// Weathers[n].Sea2.AnimSpeed1 = 0.0; //скорость анимации
	// Weathers[n].Sea2.Scale1 = 0.07; //размеры волны
	// Weathers[n].Sea2.MoveSpeed1 = "15.0, 0.0, 0.0"; //скорость движения

	// Weathers[n].Sea2.Amp2 = 2.5;
	// Weathers[n].Sea2.AnimSpeed2 = 4.0;
	// Weathers[n].Sea2.Scale2 = 2.0;
	// Weathers[n].Sea2.MoveSpeed2 = "1.0, 0.0, 0.0";

	// Weathers[n].Sea2.FoamK = 0.01;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	// Weathers[n].Sea2.FoamV = 12.0;//высота с которой начинается пена
	// Weathers[n].Sea2.FoamUV = 0.2; //тайлинг пены
	// Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	

	// Weathers[n].Wind.Angle = 2.0;
	// Weathers[n].Wind.Speed.Min = 12.0;
	// Weathers[n].Wind.Speed.Max = 17.0;
	n++;

// ====================================================================
// Day1 12 часов

	Weathers[n].id = "12 Hour";
	Weathers[n].Hour.Min = 12;
	Weathers[n].Hour.Max = 12;
	Weathers[n].Lighting = "day11";
	Weathers[n].LightingLm = "day1";
	Weathers[n].InsideBack = "d";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\12\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 1000.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;
	
	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.001;
	Weathers[n].Fog.IslandDensity = 0.001;
	Weathers[n].Fog.SeaDensity = 0.001;
	//Weathers[n].Fog.Color = argb(0,115,140,155);
	Weathers[n].Fog.Color = argb(0,60,120,160);;
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,160,120,98);
	Weathers[n].Sun.Ambient = argb(0,100,90,80);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	//Weathers[n].Sun.HeightAngle = 0.70;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	Weathers[n].Sun.HeightAngle = 0.70;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunglow_z";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(0, 200, 200, 200);
	Weathers[n].Sun.Flare.Enable = true;
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,5,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.5;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,55,100);
	Weathers[n].Sea.Pena.Color = argb(0,175,175,155);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,128,55,0);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,200,150);
	Weathers[n].Sea.SunRoad.Power = 0.2;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 2.5, 3.0, 0.0, 10.00";
	Weathers[n].Sea.Harmonics.h2 = "90.0, 5.0, 1.5, 0.0, 50.00";
	Weathers[n].Sea.Harmonics.h3 = "45.0, 8.0, 2.5, 0.0, 200.00";
	Weathers[n].Sea.Harmonics.h4 = "13.0, 6.0, 1.0, 0.0, 150.00";
	Weathers[n].Sea.Harmonics.h5 = "90.0, 50.0, 0.2, 0.0, 20.00";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 2.0; //остроконечность волн
	
	//Weathers[n].Sea2.WaterColor = argb(0, 10, 90, 120);
	//Weathers[n].Sea2.SkyColor = argb(0, 255, 255, 255);

	Weathers[n].Sea2.WaterColor = argb(0,30,55,100);
	Weathers[n].Sea2.SkyColor = argb(0, 255, 255, 255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.5;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 7.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 2.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.5; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "2.0, 0.0, 0.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.0;
	Weathers[n].Sea2.AnimSpeed2 = 19.0;
	Weathers[n].Sea2.Scale2 = 3.0;
	Weathers[n].Sea2.MoveSpeed2 = "1.0, 0.0, 1.0";

	Weathers[n].Sea2.FoamK = 0.1;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 3.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.5; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 4.0;
	Weathers[n].Wind.Speed.Max = 13.0;
	
	n++;

// ====================================================================
// Day2 13 часов

	Weathers[n].id = "13 Hour";
	Weathers[n].Hour.Min = 13;
	Weathers[n].Hour.Max = 13;
	Weathers[n].Lighting = "day15";
	Weathers[n].LightingLm = "day2";
	Weathers[n].InsideBack = "d";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\13\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 1000.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;

	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.0001;
	Weathers[n].Fog.IslandDensity = 0.001;
	Weathers[n].Fog.SeaDensity = 0.001;
	//Weathers[n].Fog.Color = argb(0,85,155,190);
	Weathers[n].Fog.Color = argb(0,80,130,155);
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,160,120,98);
	Weathers[n].Sun.Ambient = argb(0,100,95,90);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(88.0);
	//Weathers[n].Sun.HeightAngle = 0.85;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	Weathers[n].Sun.HeightAngle = 1.2;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = true;
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,5,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.4;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,55,100);
	Weathers[n].Sea.Pena.Color = argb(0,175,175,155);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 0.05;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,255,240,120);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,200,160);
	Weathers[n].Sea.SunRoad.Power = 3.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 1.5, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h2 = "0.0, 3.5, 2.0, 0.0, 20.0";
	Weathers[n].Sea.Harmonics.h3 = "90.0, 2.5, 4.0, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 1.5, 1.5, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h5 = "240.0, 15.0, 1.0, 10.0, 85.0";
	Weathers[n].Sea.Harmonics.h6 = "120.0, 18.0, 0.8, 30.0, 125.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 2.5; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,30,55,100);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 6.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 10.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.8; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "0.0, 0.0, 3.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 2.0;
	Weathers[n].Sea2.AnimSpeed2 = 19.0;
	Weathers[n].Sea2.Scale2 = 2.0;
	Weathers[n].Sea2.MoveSpeed2 = "-2.0, 0.0, 0.0";

	Weathers[n].Sea2.FoamK = 0.2;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 3.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 1.0; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 7.0;
	Weathers[n].Wind.Speed.Max = 14.5;
	
	n++;

// ====================================================================
// Day2 14 часов

	Weathers[n].id = "14 Hour";
	Weathers[n].Hour.Min = 14;
	Weathers[n].Hour.Max = 14;
	Weathers[n].Lighting = "day15";
	Weathers[n].LightingLm = "day2";
	Weathers[n].InsideBack = "d";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\14\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 1000.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;

	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.001;
	Weathers[n].Fog.IslandDensity = 0.001;
	Weathers[n].Fog.SeaDensity = 0.001;
	//Weathers[n].Fog.Color = argb(0,85,155,190);
	Weathers[n].Fog.Color = argb(0,80,140,160);
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,160,120,98);
	Weathers[n].Sun.Ambient = argb(0,100,95,90);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(88.0);
	//Weathers[n].Sun.HeightAngle = 0.85;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	Weathers[n].Sun.HeightAngle = 1.2;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = true;
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,5,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.4;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,55,100);
	Weathers[n].Sea.Pena.Color = argb(0,175,175,155);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,255,240,120);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,200,160);
	Weathers[n].Sea.SunRoad.Power = 3.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 1.5, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h2 = "0.0, 3.5, 2.0, 0.0, 20.0";
	Weathers[n].Sea.Harmonics.h3 = "90.0, 2.5, 4.0, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 1.5, 1.5, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h5 = "240.0, 15.0, 1.0, 10.0, 85.0";
	Weathers[n].Sea.Harmonics.h6 = "120.0, 18.0, 0.8, 30.0, 125.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 2.5; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,30,55,100);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 6.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 10.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.8; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "0.0, 0.0, 3.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.0;
	Weathers[n].Sea2.AnimSpeed2 = 19.0;
	Weathers[n].Sea2.Scale2 = 2.0;
	Weathers[n].Sea2.MoveSpeed2 = "-2.0, 0.0, 0.0";

	Weathers[n].Sea2.FoamK = 0.15;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 3.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 1.0; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 7.0;
	Weathers[n].Wind.Speed.Max = 14.5;
	
	n++;

// ====================================================================
// Day3 15 часов

	Weathers[n].id = "15 Nour";
	Weathers[n].Hour.Min = 15;
	Weathers[n].Hour.Max = 15;
	Weathers[n].Lighting = "day15";
	Weathers[n].LightingLm = "day3";
	Weathers[n].InsideBack = "d";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\15\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 1000.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;

	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.001;
	Weathers[n].Fog.IslandDensity = 0.001;
	Weathers[n].Fog.SeaDensity = 0.001;
	//Weathers[n].Fog.Color = argb(0,85,155,190);
	Weathers[n].Fog.Color = argb(0,70,115,140);
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,160,120,98);
	Weathers[n].Sun.Ambient = argb(0,100,95,90);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(88.0);
	//Weathers[n].Sun.HeightAngle = 0.85;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	Weathers[n].Sun.HeightAngle = 1.2;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = true;
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,5,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.4;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,55,100);
	Weathers[n].Sea.Pena.Color = argb(0,175,175,155);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,255,240,120);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,200,160);
	Weathers[n].Sea.SunRoad.Power = 3.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 1.5, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h2 = "0.0, 3.5, 2.0, 0.0, 20.0";
	Weathers[n].Sea.Harmonics.h3 = "90.0, 2.5, 4.0, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 1.5, 1.5, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h5 = "240.0, 15.0, 1.0, 10.0, 85.0";
	Weathers[n].Sea.Harmonics.h6 = "120.0, 18.0, 0.8, 30.0, 125.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 2.5; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,30,55,100);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 25.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 1.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.15; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "1.0, 0.0, 6.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 0.8;
	Weathers[n].Sea2.AnimSpeed2 = 19.0;
	Weathers[n].Sea2.Scale2 = 4.0;
	Weathers[n].Sea2.MoveSpeed2 = "0.0, 0.0, 1.0";

	Weathers[n].Sea2.FoamK = 0.04;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 10;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.2; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 7.0;
	Weathers[n].Wind.Speed.Max = 14.0;
	
	n++;
// ====================================================================
// Day3 16 часов

	Weathers[n].id = "16 Nour";
	Weathers[n].Hour.Min = 16;
	Weathers[n].Hour.Max = 16;
	Weathers[n].Lighting = "day15";
	Weathers[n].LightingLm = "day3";
	Weathers[n].InsideBack = "d";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\16\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 1000.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;

	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.001;
	Weathers[n].Fog.IslandDensity = 0.001;
	Weathers[n].Fog.SeaDensity = 0.001;
	//Weathers[n].Fog.Color = argb(0,85,155,190);
	Weathers[n].Fog.Color = argb(0,80,100,100);
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,160,120,98);
	Weathers[n].Sun.Ambient = argb(0,100,95,90);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(88.0);
	//Weathers[n].Sun.HeightAngle = 0.85;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	Weathers[n].Sun.HeightAngle = 1.2;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = true;
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,5,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.4;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,55,100);
	Weathers[n].Sea.Pena.Color = argb(0,175,175,155);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,255,240,120);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,200,160);
	Weathers[n].Sea.SunRoad.Power = 3.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 1.5, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h2 = "0.0, 3.5, 2.0, 0.0, 20.0";
	Weathers[n].Sea.Harmonics.h3 = "90.0, 2.5, 4.0, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 1.5, 1.5, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h5 = "240.0, 15.0, 1.0, 10.0, 85.0";
	Weathers[n].Sea.Harmonics.h6 = "120.0, 18.0, 0.8, 30.0, 125.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 2.5; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,30,55,100);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 25.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 1.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.15; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "1.0, 0.0, 6.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 0.8;
	Weathers[n].Sea2.AnimSpeed2 = 19.0;
	Weathers[n].Sea2.Scale2 = 4.0;
	Weathers[n].Sea2.MoveSpeed2 = "0.0, 0.0, 1.0";

	Weathers[n].Sea2.FoamK = 0.03;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 9.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.5; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 7.0;
	Weathers[n].Wind.Speed.Max = 14.0;
	
	n++;

// ====================================================================
// Day4 17 часов

	Weathers[n].id = "17 Hour";
	Weathers[n].Hour.Min = 17;
	Weathers[n].Hour.Max = 17;
	Weathers[n].Lighting = "day15";
	Weathers[n].LightingLm = "day4";
	Weathers[n].InsideBack = "d";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\17\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 1000.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;

	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.002;
	Weathers[n].Fog.IslandDensity = 0.002;
	Weathers[n].Fog.SeaDensity = 0.002;
	//Weathers[n].Fog.Color = argb(0,85,155,190);
	Weathers[n].Fog.Color = argb(0,110,130,150);
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,160,120,98);
	Weathers[n].Sun.Ambient = argb(0,100,95,90);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(88.0);
	//Weathers[n].Sun.HeightAngle = 0.85;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(150.0);
	Weathers[n].Sun.HeightAngle = 1.2;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = true;
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,5,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.4;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,55,100);
	Weathers[n].Sea.Pena.Color = argb(0,175,175,155);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,255,240,120);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,200,160);
	Weathers[n].Sea.SunRoad.Power = 3.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 1.5, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h2 = "0.0, 3.5, 2.0, 0.0, 20.0";
	Weathers[n].Sea.Harmonics.h3 = "90.0, 2.5, 4.0, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 1.5, 1.5, 0.0, 15.0";
	Weathers[n].Sea.Harmonics.h5 = "240.0, 15.0, 1.0, 10.0, 85.0";
	Weathers[n].Sea.Harmonics.h6 = "120.0, 18.0, 0.8, 30.0, 125.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 2.5; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,30,55,100);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 19.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 2.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.25; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "1.0, 0.0, 7.5"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.5;
	Weathers[n].Sea2.AnimSpeed2 = 9.0;
	Weathers[n].Sea2.Scale2 = 2.0;
	Weathers[n].Sea2.MoveSpeed2 = "0.0, 0.0, 1.0";

	Weathers[n].Sea2.FoamK = 0.015;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 6.7;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.5; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	
	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 5.0;
	Weathers[n].Wind.Speed.Max = 14.8;
	
	n++;

// ====================================================================
// Day4 18 часов

	Weathers[n].id = "18 Hour";
	Weathers[n].Hour.Min = 18;
	Weathers[n].Hour.Max = 18;
	Weathers[n].Lighting = "evening19";
	Weathers[n].LightingLm = "day4";
	Weathers[n].InsideBack = "d";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = true;
	Weathers[n].Lights = 0;
	Weathers[n].Night = false;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\18\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 1000.0;
	Weathers[n].Sky.Angle = 0.0;

	Weathers[n].Planets.enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 200.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;
	
	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 300.0;
	Weathers[n].Fog.Start = 0.0;
	Weathers[n].Fog.Density = 0.002;
	Weathers[n].Fog.IslandDensity = 0.002;
	Weathers[n].Fog.SeaDensity = 0.002;
	Weathers[n].Fog.Color = argb(0,90,110,120);
	
	Weathers[n].Rain.NumDrops = 0;
	Weathers[n].Rain.Color = argb(0,73,73,73);
	Weathers[n].Rain.DropLength = 2.12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18.0;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.25;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(63, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Sun.Color = argb(0,184,125,85);
	Weathers[n].Sun.Ambient = argb(0,91,79,76);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(-25.0);
	//Weathers[n].Sun.HeightAngle = 0.60;
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(300.0);
	Weathers[n].Sun.HeightAngle = 0.70;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 3500.0;
	Weathers[n].Sun.Glow.Size = 500.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\reflection\refl_evening.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,100,100,100);
	Weathers[n].Sun.Overflow.Enable = false;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = false
	Weathers[n].Sun.Flare.Texture = "weather\sun\flare\allflares.tga.tx";
	Weathers[n].Sun.Flare.Dist = 3500.0;
	Weathers[n].Sun.Flare.TexSizeX = 2;
	Weathers[n].Sun.Flare.TexSizeY = 2;
	Weathers[n].Sun.Flare.Technique = "sunflare";
	Weathers[n].Sun.Flare.Scale = 2.0;
	Weathers[n].Sun.Flares.f1 = "1.0,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f2 = "0.9,20.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f3 = "0.8,30.0,2,0x0F0F0F";
	Weathers[n].Sun.Flares.f4 = "0.6,150.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f5 = "0.5,50.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f6 = "0.4,100.0,1,0x0F0F0F";
	Weathers[n].Sun.Flares.f7 = "0.3,200.0,0,0x0F0F0F";
	Weathers[n].Sun.Flares.f8 = "0.2,200.0,0,0x0F0F0F";

	Weathers[n].Sea.GF2MX.Sky.Color = argb(0,160,210,255);
	Weathers[n].Sea.GF2MX.Water.Color = argb(0,0,5,10);
	Weathers[n].Sea.GF2MX.Bump.Tile = 0.05;
	Weathers[n].Sea.GF2MX.Bump.AnimSpeed = 7.0;
	Weathers[n].Sea.GF2MX.Bump.Dir = "weather\sea\bump_g2mx\";

	Weathers[n].Sea.Transparency = 0.4;
	Weathers[n].Sea.FrenelCoefficient = 0.7;
	Weathers[n].Sea.WaterReflection = 0.7;
	Weathers[n].Sea.WaterAttenuation = 0.8;
	Weathers[n].Sea.Sky.Color = argb(0,255,255,255);
	Weathers[n].Sea.Water.Color = argb(0,30,52,89);
	Weathers[n].Sea.Pena.Color = argb(0,255,150,100);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,255,77,55);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,180,22);
	Weathers[n].Sea.SunRoad.Power = 4.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "90.0, 2.0, 4.5, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h2 = "45.0, 1.0, 6.0, 0.0, 50.0";
	Weathers[n].Sea.Harmonics.h2 = "0.0, 4.0, 2.0, 0.0, 150.0";
	Weathers[n].Sea.Harmonics.h2 = "180.0, 5.0, 1.0, 0.0, 150.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_day.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 0.2; //остроконечность волн
	
	//Weathers[n].Sea2.WaterColor = argb(0, 97, 123, 163);
	//Weathers[n].Sea2.SkyColor = argb(0, 175, 255, 255);

	Weathers[n].Sea2.WaterColor = argb(0,30,52,89);
	Weathers[n].Sea2.SkyColor = argb(0, 255, 255, 255);

	Weathers[n].Sea2.Reflection = 0.4;
	Weathers[n].Sea2.Transparency = 0.7;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 19.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 2.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.25; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "1.0, 0.0, 7.5"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.5;
	Weathers[n].Sea2.AnimSpeed2 = 9.0;
	Weathers[n].Sea2.Scale2 = 3.0;
	Weathers[n].Sea2.MoveSpeed2 = "0.0, 0.0, 1.0";

	Weathers[n].Sea2.FoamK = 0.02;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 6.5;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.1; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	
	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 5.0;
	Weathers[n].Wind.Speed.Max = 14.8;
	
	n++;

	return n;
}
