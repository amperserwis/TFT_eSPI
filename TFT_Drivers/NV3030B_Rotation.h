  // This is the command sequence that rotates the NV3030B driver coordinate frame

  writecommand(TFT_MADCTL);
  rotation = m % 4;
  switch (rotation) {
    case 0: // Portrait
#ifdef CGRAM_OFFSET
      if(_init_height == 280)
      {
        colstart = 0;
        rowstart = 20;
      }
      else
      {
        colstart = 0;
        rowstart = 0;
      }
#endif
      writedata(TFT_MAD_COLOR_ORDER);

      _width  = _init_width;
      _height = _init_height;
      break;

    case 1: // Landscape (Portrait + 90)
#ifdef CGRAM_OFFSET
      if(_init_height == 280)
      {
        colstart = 20;
        rowstart = 0;
      }
      else
      {
        colstart = 0;
        rowstart = 0;
      }
#endif
      writedata(TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_COLOR_ORDER);

      _width  = _init_height;
      _height = _init_width;
      break;

      case 2: // Inverter portrait
#ifdef CGRAM_OFFSET
      if(_init_height == 280)
      {
        colstart = 0;
        rowstart = 20;
      }
      else
      {
        colstart = 0;
        rowstart = 80;
      }
#endif
      writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_COLOR_ORDER);

      _width  = _init_width;
      _height = _init_height;
       break;
    case 3: // Inverted landscape
#ifdef CGRAM_OFFSET
      if(_init_height == 280)
      {
        colstart = 20;
        rowstart = 0;
      }
      else
      {
        colstart = 80;
        rowstart = 0;
      }
#endif
      writedata(TFT_MAD_MV | TFT_MAD_MY | TFT_MAD_COLOR_ORDER);

      _width  = _init_height;
      _height = _init_width;
      break;
  }
