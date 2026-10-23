/* sub_606E18AC
 * address: 0x606E18AC   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E18AC(_DWORD *a1)
{
  unsigned int v2; // r0
  _BYTE *v3; // r5
  _DWORD *v4; // r8
  float v5; // s0
  int v6; // r1
  float v7; // s0
  int v8; // r0
  bool v9; // zf
  int v10; // r3
  __int64 v11; // r0
  int v13; // r0
  int v14; // r3
  __int64 v15; // r0
  int v16; // r3
  __int64 v17; // r0
  _DWORD *v18; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 272))(a1);
  a1[1720] = a1[27];
  a1[1721] = a1[28];
  a1[1722] = a1[29];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 196))(a1);
  v2 = a1[5];
  a1[1727] = v2 & 1;
  a1[1731] = HIWORD(v2) & 1;
  a1[1741] = (v2 >> 17) & 1;
  a1[1732] = (v2 >> 8) & 0xF;
  a1[1733] = (v2 >> 28) & 1;
  a1[1734] = (unsigned __int16)v2 >> 12;
  *((_BYTE *)a1 + 6917) = 54;
  v3 = (char *)a1 + 6917;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 200))(a1);
  v4 = a1 + 1727;
  a1[123] = 0;
  a1[124] = 1090519040;
  if ( a1[1731] )
  {
    if ( *v4 )
    {
      v5 = -16.0;
      a1[41] = 0x80000000;
    }
    else
    {
      v5 = 16.0;
    }
    *((float *)a1 + 28) = v5 + *((float *)a1 + 28);
    a1[125] = 1107296256;
    a1[126] = 1107296256;
    a1[127] = 1107296256;
    a1[128] = 1107296256;
  }
  v6 = a1[5];
  if ( (v6 & 0xF00000) != 0 )
    *v3 = 0;
  if ( (v6 & 0xF0) != 0 )
    *((float *)a1 + 27) = *((float *)a1 + 27) + 8.0;
  if ( !a1[1732]
    && sub_603FD6E0(
         dword_60C99DF4,
         FIELD_U8(LevelInfo_instance, 18),
         *((float *)a1 + 1720),
         *((float *)a1 + 1721)) )
  {
    v8 = FIELD_U8(dword_60CC6D8C, 17);
    v9 = v8 == 0;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      v8 = *((unsigned __int8 *)a1 + 540);
      v9 = v8 == 0;
    }
    if ( v9 )
      goto LABEL_21;
    v10 = v8 - 33;
    HIDWORD(v11) = 1u >> (33 - v8);
    LODWORD(v11) = 1 << (v8 - 1);
    if ( v10 >= 0 )
    {
      HIDWORD(v11) = 1 << v10;
      LODWORD(v11) = 0;
    }
    if ( (*(_QWORD *)(EventMgr__instance + 16) & v11) != 0 )
    {
LABEL_21:
      *(_BYTE *)a1[158] = 1;
      return 2;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  a1[143] = 0;
  a1[144] = 1090519040;
  a1[145] = 0;
  if ( !a1[1731] )
  {
    if ( *v4 == 1 )
    {
      v7 = 1.0;
      a1[41] = 0x80000000;
    }
    else
    {
      v7 = -1.0;
    }
    *((float *)a1 + 28) = v7 + *((float *)a1 + 28);
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 256))(a1);
  v13 = *((unsigned __int8 *)a1 + 539);
  if ( a1[1734] )
  {
    if ( *((_BYTE *)a1 + 539) )
    {
      v14 = v13 - 33;
      HIDWORD(v15) = 1u >> (33 - v13);
      LODWORD(v15) = 1 << (v13 - 1);
      if ( v14 >= 0 )
      {
        HIDWORD(v15) = 1 << v14;
        LODWORD(v15) = 0;
      }
      if ( (*(_QWORD *)(EventMgr__instance + 16) & v15) == 0 )
      {
LABEL_34:
        if ( *v3 )
        {
          v18 = **(_DWORD ***)(a1[1526] + 12);
          v18[5] = v18[2];
          v18[7] |= 2u;
          (*(void (__fastcall **)(_DWORD *))(*a1 + 264))(a1);
          (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CBBDD4);
        }
        goto LABEL_37;
      }
    }
  }
  else if ( *((_BYTE *)a1 + 539) )
  {
    v16 = v13 - 33;
    HIDWORD(v17) = 1u >> (33 - v13);
    LODWORD(v17) = 1 << (v13 - 1);
    if ( v16 >= 0 )
    {
      HIDWORD(v17) = 1 << v16;
      LODWORD(v17) = 0;
    }
    if ( (*(_QWORD *)(EventMgr__instance + 16) & v17) != 0 )
      goto LABEL_34;
  }
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CBBD54);
LABEL_37:
  if ( (*((_BYTE *)a1 + 25) & 0x10) != 0 )
    a1[29] = 1124073472;
  sub_606E1CB4(a1);
  *((_BYTE *)a1 + 6918) = -1;
  return 1;
}
