int Whr_InitEvening(int n)
{
	
// ====================================================================
// Evening1 19 часов

	Weathers[n].id = "19 Hour";
	Weathers[n].Hour.Min = 19;
	Weathers[n].Hour.Max = 19;
	Weathers[n].Lighting = "evening19";
	Weathers[n].LightingLm = "evening";
	Weathers[n].InsideBack = "e";

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

	Weathers[n].Sky.Dir = "weather\skies\19\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 2000.0;
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
	Weathers[n].Fog.Height = 220.0;
	Weathers[n].Fog.Start = 0.0;
	Weathers[n].Fog.Density = 0.0005;
	Weathers[n].Fog.IslandDensity = 0.0005;
	Weathers[n].Fog.SeaDensity = 0.0005;
	Weathers[n].Fog.Color = argb(0,104,104,133);
	
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
	Weathers[n].Sea.Water.Color = argb(0,30,49,78);
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

	Weathers[n].Sea2.WaterColor = argb(0,30,49,78);
	Weathers[n].Sea2.SkyColor = argb(0, 255, 255, 255);

	Weathers[n].Sea2.Reflection = 0.4;
	Weathers[n].Sea2.Transparency = 0.7;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 30.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 1.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.15; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "10.0, 0.0, 0.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.0;
	Weathers[n].Sea2.AnimSpeed2 = 4.0;
	Weathers[n].Sea2.Scale2 = 2.0;
	Weathers[n].Sea2.MoveSpeed2 = "-2.5, 0.0, 0.0";

	Weathers[n].Sea2.FoamK = 0.01;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 10.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.2; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 7.0;
	Weathers[n].Wind.Speed.Max = 12.0;
	
	n++;


// ====================================================================
// Evening 2 20 часов

	Weathers[n].id = "20 Hour";
	Weathers[n].Hour.Min = 20;
	Weathers[n].Hour.Max = 20;
	Weathers[n].Lighting = "Evening19";
	Weathers[n].LightingLm = "evening";
	Weathers[n].InsideBack = "e";

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

	Weathers[n].Sky.Dir = "weather\skies\20\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 2000.0;
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
	Weathers[n].Fog.Height = 200.0;
	Weathers[n].Fog.Start = 10.0;
	Weathers[n].Fog.Density = 0.0005;
	Weathers[n].Fog.IslandDensity = 0.0005;
	Weathers[n].Fog.SeaDensity = 0.0005;
	Weathers[n].Fog.Color = argb(0,81,71,87);
	
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

	Weathers[n].Sun.Color = argb(0,138,80,55);
	Weathers[n].Sun.Ambient = argb(0,82,63,62);
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
	Weathers[n].Sea.Water.Color = argb(0,30,46,67);
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

	Weathers[n].Sea2.WaterColor = argb(0,30,46,67);
	Weathers[n].Sea2.SkyColor = argb(0, 255, 255, 255);

	Weathers[n].Sea2.Reflection = 0.4;
	Weathers[n].Sea2.Transparency = 0.7;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 30.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 2.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.12; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "0.0, 0.0, 6.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 3.75;
	Weathers[n].Sea2.AnimSpeed2 = 3.0;
	Weathers[n].Sea2.Scale2 = 1.5;
	Weathers[n].Sea2.MoveSpeed2 = "-1.5, 0.0, 0.0";

	Weathers[n].Sea2.FoamK = 0.02;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 13.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.2; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 8.5;
	Weathers[n].Wind.Speed.Max = 14.0;
	
	n++;	

// ====================================================================
// Evening3 21 час

	Weathers[n].id = "21 Hour";
	Weathers[n].Hour.Min = 21;
	Weathers[n].Hour.Max = 21;
	Weathers[n].Lighting = "evening21";
	Weathers[n].LightingLm = "evening";
	Weathers[n].InsideBack = "e";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = false;
	Weathers[n].Lights = 1;
	Weathers[n].Night = true;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\21\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 2000.0;
	Weathers[n].Sky.Angle = 0.0;
	
	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 380;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.0005;
	Weathers[n].Fog.IslandDensity = 0.0005;
	Weathers[n].Fog.SeaDensity = 0.0005;
	Weathers[n].Fog.Color = argb(0,60,35,35);
	
	Weathers[n].Rain.NumDrops = 1500;
	Weathers[n].Rain.Color = argb(0,23,23,23);
	Weathers[n].Rain.DropLength = 12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.5;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(56, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Planets.Enable = false;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 500.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 8.0;

	Weathers[n].Sun.Color = argb(0,112,85,45);
	Weathers[n].Sun.Ambient = argb(0,73,47,48);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(37.0);
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(337.0);
	Weathers[n].Sun.HeightAngle = 1.00;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 2500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = true;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = false;
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
	Weathers[n].Sea.Water.Color = argb(0,30,42,55);
	Weathers[n].Sea.Pena.Color = argb(0,255,100,70);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,200,44,44);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,128,55);
	Weathers[n].Sea.SunRoad.Power = 2.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 4.0, 1.4, 0.0, 50.0";
	Weathers[n].Sea.Harmonics.h2 = "270.0, 1.0, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h3 = "45.0, 2.0, 2.0, 0.0, 5.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 2.0, 1.5, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h5 = "360.0, 1.0, 3.0, 0.0, 10.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_evening.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 225, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 1.0; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,30,42,55);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 30.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 2.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.17; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "7.0, 0.0, 0.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.5;
	Weathers[n].Sea2.AnimSpeed2 = 4.0;
	Weathers[n].Sea2.Scale2 = 2.2;
	Weathers[n].Sea2.MoveSpeed2 = "-1.5, 0.0, 0.0";

	Weathers[n].Sea2.FoamK = 0.015;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 11.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.2; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 8.0;
	Weathers[n].Wind.Speed.Max = 14.0;
	
	n++;

// ====================================================================
// Eveninng4 22 часа

	Weathers[n].id = "22 Hour";
	Weathers[n].Hour.Min = 22;
	Weathers[n].Hour.Max = 22;
	Weathers[n].Lighting = "evening23";
	Weathers[n].LightingLm = "evening";
	Weathers[n].InsideBack = "e";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = false;
	Weathers[n].Lights = 1;
	Weathers[n].Night = true;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\22\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 2000.0;
	Weathers[n].Sky.Angle = 0.0;
	
	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 400;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.0005;
	Weathers[n].Fog.IslandDensity = 0.0005;
	Weathers[n].Fog.SeaDensity = 0.0005;
	Weathers[n].Fog.Color = argb(0,34,14,20);
	
	Weathers[n].Rain.NumDrops = 1500;
	Weathers[n].Rain.Color = argb(0,23,23,23);
	Weathers[n].Rain.DropLength = 12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.5;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(56, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Planets.Enable = true;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 20.0;
	Weathers[n].Stars.HeightFade = 400.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 15.0;

	Weathers[n].Sun.Color = argb(0,157,109,72);
	Weathers[n].Sun.Ambient = argb(0,48,30,33);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(37.0);
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(337.0);
	Weathers[n].Sun.HeightAngle = 1.00;
	Weathers[n].Sun.Glow.Enable = false;
	Weathers[n].Sun.Glow.Dist = 1500.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = true;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = false;
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
	Weathers[n].Sea.Water.Color = argb(0,27,37,49);
	Weathers[n].Sea.Pena.Color = argb(0,255,100,70);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,200,44,44);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,128,55);
	Weathers[n].Sea.SunRoad.Power = 2.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 4.0, 1.4, 0.0, 50.0";
	Weathers[n].Sea.Harmonics.h2 = "270.0, 1.0, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h3 = "45.0, 2.0, 2.0, 0.0, 5.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 2.0, 1.5, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h5 = "360.0, 1.0, 3.0, 0.0, 10.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_evening.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 1.0; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,27,37,49);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 17.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 4.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.3; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "2.0, 0.0, 1.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.0;
	Weathers[n].Sea2.AnimSpeed2 = 19.0;
	Weathers[n].Sea2.Scale2 = 2.0;
	Weathers[n].Sea2.MoveSpeed2 = "-1.5, 0.0, -2.0";

	Weathers[n].Sea2.FoamK = 0.03;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 7.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.2; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 6.0;
	Weathers[n].Wind.Speed.Max = 12.0;
	
	n++;

// ====================================================================
// Eveninng4

	Weathers[n].id = "23 Hour";
	Weathers[n].Hour.Min = 23;
	Weathers[n].Hour.Max = 23;
	Weathers[n].Lighting = "evening23";
	Weathers[n].LightingLm = "storm";
	Weathers[n].InsideBack = "e";

	Weathers[n].Storm = false;
	Weathers[n].Tornado = false;
	Weathers[n].Shark = false;
	Weathers[n].Lights = 1;
	Weathers[n].Night = true;

	Weathers[n].Shadow.Density.Head = argb(255,96,96,96);
	Weathers[n].Shadow.Density.Foot = argb(255,96,96,64);

	Weathers[n].Lightning.Enable = false;
	Weathers[n].Lightning.Texture = "Weather\lightning\lightning.tga.tx";
	Weathers[n].Lightning.FlickerTime = 32;
	Weathers[n].Lightning.SubTexX = 1;
	Weathers[n].Lightning.SubTexY = 1;

	Weathers[n].Sky.Dir = "weather\skies\23\";
	Weathers[n].Sky.Color = argb(0,255,255,255);
	Weathers[n].Sky.Rotate.Min = 0.0;
	Weathers[n].Sky.Rotate.Max = 0.0;
	Weathers[n].Sky.Size = 2000.0;
	Weathers[n].Sky.Angle = 0.0;
	
	Weathers[n].Fog.Enable = true;
	Weathers[n].Fog.Height = 140;
	Weathers[n].Fog.Start = 0;
	Weathers[n].Fog.Density = 0.0005;
	Weathers[n].Fog.IslandDensity = 0.0005;
	Weathers[n].Fog.SeaDensity = 0.0005;
	Weathers[n].Fog.Color = argb(0,6,6,10);
	
	Weathers[n].Rain.NumDrops = 1500;
	Weathers[n].Rain.Color = argb(0,23,23,23);
	Weathers[n].Rain.DropLength = 12;
	Weathers[n].Rain.Height = 30.0;
	Weathers[n].Rain.Radius = 30.0;
	Weathers[n].Rain.Speed = 18;
	Weathers[n].Rain.Jitter = 0.4;
	Weathers[n].Rain.WindSpeedJitter = 0.5;
	Weathers[n].Rain.MaxBlend = 49;
	Weathers[n].Rain.TimeBlend = 2000;

	Weathers[n].Rain.DropsNearNum = 500;
	Weathers[n].Rain.DropsFarNum = 500;
	Weathers[n].Rain.DropsNearRadius = 25.0;
	Weathers[n].Rain.DropsFarRadius = 75.0;
	Weathers[n].Rain.DropsLifeTime = 0.5;
	Weathers[n].Rain.DropsSize = 0.06;
	Weathers[n].Rain.DropsTexture = "weather\rain_drops.tga.tx";
	Weathers[n].Rain.DropsColor = argb(56, 255, 255, 255);

	Weathers[n].Rainbow.Enable = false;
	Weathers[n].Rainbow.Texture = "weather\rainbow\rainbow.tga.tx";

	Weathers[n].Planets.Enable = true;

	Weathers[n].Stars.Enable = false;
	Weathers[n].Stars.Texture = "weather\astronomy\stars.tga.tx";
	Weathers[n].Stars.Color = argb(0, 255, 255, 255);
	Weathers[n].Stars.Radius = 2000.0;
	Weathers[n].Stars.Size = 15.0;
	Weathers[n].Stars.HeightFade = 400.0;
	Weathers[n].Stars.SunFade = 1.0;
	Weathers[n].Stars.VisualMagnitude = 15.0;

	Weathers[n].Sun.Color = argb(0,20,10,5);
	Weathers[n].Sun.Ambient = argb(0,24,24,42);
	//Weathers[n].Sun.AzimuthAngle = Degree2Radian(37.0);
	Weathers[n].Sun.AzimuthAngle = Degree2Radian(337.0);
	Weathers[n].Sun.HeightAngle = -1.00;
	Weathers[n].Sun.Glow.Enable = true;
	Weathers[n].Sun.Glow.Dist = 2000.0;
	Weathers[n].Sun.Glow.Size = 1250.0;
	Weathers[n].Sun.Glow.RotateSpeed = 1.0;
	Weathers[n].Sun.Glow.Texture = "weather\sun\glow\sunglow.tga.tx";
	Weathers[n].Sun.Glow.DecayTime = 8.0;
	Weathers[n].Sun.Glow.TechniqueNoZ = "sunglow_noz";
	Weathers[n].Sun.Glow.TechniqueZ = "sunglow_z";
	Weathers[n].Sun.Glow.Color = argb(0,255,255,255);
	Weathers[n].Sun.Overflow.Enable = true;
	Weathers[n].Sun.Overflow.Texture = "Weather\lightning\flash.tga.tx";
	Weathers[n].Sun.Overflow.Color = argb(0, 100, 100, 100);
	Weathers[n].Sun.Overflow.Size = 5500.0;
	Weathers[n].Sun.Overflow.Technique = "sunoverflow";
	Weathers[n].Sun.Overflow.Start = 0.7;
	Weathers[n].Sun.Flare.Enable = false;
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
	Weathers[n].Sea.Water.Color = argb(0,9,15,21);
	Weathers[n].Sea.Pena.Color = argb(0,255,100,70);
	Weathers[n].Sea.Bump.Dir = "resource\textures\weather\sea\bump_g3\";
	Weathers[n].Sea.Bump.Tile = 0.04;
	Weathers[n].Sea.Bump.Ang = 0.0;
	Weathers[n].Sea.Bump.Speed = 0.01;
	Weathers[n].Sea.Bump.AnimSpeed = 15.0;
	Weathers[n].Sea.Bump.Scale = 2.0;
	Weathers[n].Sea.SunRoad.Start = 0.99;
	Weathers[n].Sea.SunRoad.Color1 = argb(0,200,44,44);
	Weathers[n].Sea.SunRoad.Color2 = argb(0,255,128,55);
	Weathers[n].Sea.SunRoad.Power = 2.0;
	//угол, частота, высота волны в метрах, начальная позиция волны, скорость волны
	Weathers[n].Sea.Harmonics.h1 = "0.0, 4.0, 1.4, 0.0, 50.0";
	Weathers[n].Sea.Harmonics.h2 = "270.0, 1.0, 3.0, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h3 = "45.0, 2.0, 2.0, 0.0, 5.0";
	Weathers[n].Sea.Harmonics.h4 = "90.0, 2.0, 1.5, 0.0, 10.0";
	Weathers[n].Sea.Harmonics.h5 = "360.0, 1.0, 3.0, 0.0, 10.0";

	Weathers[n].Sun.Reflection.Enable = true;
	Weathers[n].Sun.Reflection.Texture = "weather\sun\reflection\refl_evening.tga.tx";
	Weathers[n].Sun.Reflection.Technique = "sunreflection";
	Weathers[n].Sun.Reflection.Dist = 3500.0;
	Weathers[n].Sun.Reflection.Size = 500.0;
	Weathers[n].Sun.Reflection.Color = argb(200, 200, 200, 200);

	Weathers[n].Sea2.BumpScale = 0.05; //МЕЛКИЕ ВОЛНЫ
	Weathers[n].Sea2.PosShift = 1.0; //остроконечность волн
	
	Weathers[n].Sea2.WaterColor = argb(0,9,15,21);
	Weathers[n].Sea2.SkyColor = argb(0,255,255,255);

	Weathers[n].Sea2.Reflection = 0.7;
	Weathers[n].Sea2.Transparency = 0.4;
	Weathers[n].Sea2.Frenel = 0.7; 
	Weathers[n].Sea2.Attenuation = 0.8;

	Weathers[n].Sea2.Amp1 = 7.0; //амплитуда 1 волны
	Weathers[n].Sea2.AnimSpeed1 = 9.0; //скорость анимации
	Weathers[n].Sea2.Scale1 = 0.6; //размеры волны
	Weathers[n].Sea2.MoveSpeed1 = "2.0, 0.0, 1.0"; //скорость движения

	Weathers[n].Sea2.Amp2 = 1.0;
	Weathers[n].Sea2.AnimSpeed2 = 19.0;
	Weathers[n].Sea2.Scale2 = 2.0;
	Weathers[n].Sea2.MoveSpeed2 = "-1.5, 0.0, -2.0";

	Weathers[n].Sea2.FoamK = 0.02;//яркость пены по высоте 0.1 - пена яркая с 10 метров 1.0 через метр после начала
	Weathers[n].Sea2.FoamV = 3.0;//высота с которой начинается пена
	Weathers[n].Sea2.FoamUV = 0.2; //тайлинг пены
	Weathers[n].Sea2.FoamTexDisturb = 0.7;//сдвиг по нормали. х.з. что это надо поюзать. значение от 0.0 до 1.0
	

	Weathers[n].Wind.Angle = 2.0;
	Weathers[n].Wind.Speed.Min = 6.0;
	Weathers[n].Wind.Speed.Max = 12.0;
	
	n++;

	return n;
}
