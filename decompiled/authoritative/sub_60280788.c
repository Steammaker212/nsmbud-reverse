void __fastcall sub_60280788(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  float v13; // s2
  float v14; // s4
  float v15; // s0
  int v16; // r7
  int v17; // r4
  int v18; // r0
  int v19; // r1
  bool v20; // zf
  float v21; // s0
  int v22; // r0

  if ( (*(_BYTE *)(a1 + 21) & 1) == 0 )
  {
    v13 = *(float *)(dword_60CC6484 + 112);
    v14 = *(float *)(a1 + 6464);
    if ( (float)(v13 + *(float *)(dword_60CC6484 + 104)) < (float)(v14 + -64.0)
      || (v15 = *(float *)(a1 + 6472) - v14, (float)((float)(v14 + v15) + 64.0) < v13) )
    {
      __asm { POP             {R4-R11,PC} }
    }
  }
  v16 = 0;
  v17 = a1 + 6480;
  while ( 1 )
  {
    v18 = *(_DWORD *)(PlayerMgr_instance + v16 + 32);
    if ( v18 && (*(_BYTE *)(v18 + 1219) & 8) == 0 )
    {
      v19 = *(_DWORD *)(v18 + 1212);
      v20 = (v19 & 0x40) == 0;
      if ( (v19 & 0x40) == 0 )
        v20 = (*(_BYTE *)(v18 + 1207) & 8) == 0;
      if ( !v20 )
      {
        v21 = 1.0;
        v22 = v17 + v16;
LABEL_15:
        ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v22, v21, 0.25, 0.1, 0.00001);
        goto LABEL_16;
      }
      if ( (v19 & 0x100) != 0 || *(_DWORD *)(v18 + 1208) & 0x8000000 | v19 & 0x10 )
      {
        v22 = v17 + v16;
        v21 = 0.3;
        goto LABEL_15;
      }
      *(_DWORD *)(v17 + v16) = 0;
    }
LABEL_16:
    v16 += 4;
    if ( v16 == 16 )
      JUMPOUT(0x60280930);
  }
}
