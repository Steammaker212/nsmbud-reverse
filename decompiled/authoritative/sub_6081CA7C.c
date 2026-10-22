void __fastcall sub_6081CA7C(int a1)
{
  char *v2; // r5
  signed int i; // r6
  signed int v4; // r0
  const char *v5; // r1
  signed int v6; // r0
  signed int v7; // r0
  signed int v8; // r0
  signed int v9; // r0
  signed int v10; // r0
  signed int v11; // r0
  signed int v12; // r0
  signed int v13; // r0
  signed int v14; // r0
  signed int v15; // r0
  signed int v16; // r0
  signed int v17; // r0
  signed int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r5
  const void *v22; // r1
  signed int v23; // r6
  bool v24; // cc
  signed int v25; // r0

  switch ( *(_DWORD *)(a1 + 16) )
  {
    case 0:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Japanese" )
        goto LABEL_157;
      for ( i = 0; ; i += 2 )
      {
        if ( !aJapanese[i] )
          goto LABEL_105;
        if ( i > 0x7FFFF )
          break;
        if ( !aJapanese[i + 1] )
        {
          ++i;
LABEL_105:
          v6 = *(_DWORD *)(a1 + 28);
          if ( i >= v6 )
            i = v6 - 1;
          v5 = "Japanese";
          goto LABEL_156;
        }
      }
      i = 0;
      goto LABEL_105;
    case 1:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "English" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aEnglish[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aEnglish[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v7 = *(_DWORD *)(a1 + 28);
      if ( i >= v7 )
        i = v7 - 1;
      v5 = "English";
      goto LABEL_156;
    case 2:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "French" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aFrench[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aFrench[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v8 = *(_DWORD *)(a1 + 28);
      if ( i >= v8 )
        i = v8 - 1;
      v5 = "French";
      goto LABEL_156;
    case 3:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Spanish" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aSpanish[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aSpanish[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v9 = *(_DWORD *)(a1 + 28);
      if ( i >= v9 )
        i = v9 - 1;
      v5 = "Spanish";
      goto LABEL_156;
    case 4:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "English" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aEnglish[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aEnglish[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v10 = *(_DWORD *)(a1 + 28);
      if ( i >= v10 )
        i = v10 - 1;
      v5 = "English";
      goto LABEL_156;
    case 5:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "French" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aFrench[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aFrench[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v11 = *(_DWORD *)(a1 + 28);
      if ( i >= v11 )
        i = v11 - 1;
      v5 = "French";
      goto LABEL_156;
    case 6:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "German" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aGerman[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aGerman[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v12 = *(_DWORD *)(a1 + 28);
      if ( i >= v12 )
        i = v12 - 1;
      v5 = "German";
      goto LABEL_156;
    case 7:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Italian" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aItalian[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aItalian[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v13 = *(_DWORD *)(a1 + 28);
      if ( i >= v13 )
        i = v13 - 1;
      v5 = "Italian";
      goto LABEL_156;
    case 8:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Spanish" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aSpanish[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aSpanish[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v14 = *(_DWORD *)(a1 + 28);
      if ( i >= v14 )
        i = v14 - 1;
      v5 = "Spanish";
      goto LABEL_156;
    case 9:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Dutch" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aDutch[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aDutch[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v15 = *(_DWORD *)(a1 + 28);
      if ( i >= v15 )
        i = v15 - 1;
      v5 = "Dutch";
      goto LABEL_156;
    case 0xA:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Portuguese" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aPortuguese[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aPortuguese[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v16 = *(_DWORD *)(a1 + 28);
      if ( i >= v16 )
        i = v16 - 1;
      v5 = "Portuguese";
      goto LABEL_156;
    case 0xB:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Russian" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aRussian[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aRussian[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v17 = *(_DWORD *)(a1 + 28);
      if ( i >= v17 )
        i = v17 - 1;
      v5 = "Russian";
      goto LABEL_156;
    case 0xC:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Korean" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aKorean[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aKorean[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v18 = *(_DWORD *)(a1 + 28);
      if ( i >= v18 )
        i = v18 - 1;
      v5 = "Korean";
      goto LABEL_156;
    case 0xD:
    case 0xE:
      v2 = *(char **)(a1 + 24);
      if ( v2 == "Chinese" )
        goto LABEL_157;
      i = 0;
      while ( 2 )
      {
        if ( aChinese[i] )
        {
          if ( i > 0x7FFFF )
          {
            i = 0;
          }
          else
          {
            if ( aChinese[i + 1] )
            {
              i += 2;
              continue;
            }
            ++i;
          }
        }
        break;
      }
      v4 = *(_DWORD *)(a1 + 28);
      if ( i >= v4 )
        i = v4 - 1;
      v5 = "Chinese";
LABEL_156:
      qmemcpy(v2, v5, i);
      v2[i] = 0;
LABEL_157:
      v19 = sub_608FD200();
      v20 = sub_6081DB68(v19);
      v21 = *(_DWORD *)(a1 + 52);
      v22 = (const void *)v20;
      if ( v21 == v20 )
        return;
      v23 = 0;
      break;
    default:
      goto LABEL_157;
  }
  while ( *(_BYTE *)(v20 + v23) )
  {
    if ( !*(_BYTE *)(v20 + v23 + 1) )
    {
      ++v23;
      break;
    }
    if ( !*(_BYTE *)(v20 + v23 + 2) )
    {
      v23 += 2;
      break;
    }
    v24 = v23 + 2 <= 0x7FFFF;
    v23 += 3;
    if ( !v24 )
    {
      v23 = 0;
      break;
    }
  }
  v25 = *(_DWORD *)(a1 + 56);
  if ( v23 >= v25 )
    v23 = v25 - 1;
  qmemcpy(*(void **)(a1 + 52), v22, v23);
  *(_BYTE *)(v21 + v23) = 0;
}
