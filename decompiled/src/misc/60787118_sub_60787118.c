/* sub_60787118
 * address: 0x60787118   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60787118(int a1, int a2)
{
  _BYTE *v3; // r2
  int result; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r11
  int v8; // r9
  int v9; // r10
  int v10; // r8
  ActorBuildInfo buildInfo; // [sp+10h] [bp-50h] BYREF

  v3 = (_BYTE *)(dword_60C99DD4 + 272);
  if ( !dword_60C99DD4 )
    v3 = (_BYTE *)(dword_60C99DEC + 16);
  v3[49] = 0;
  v3[121] = 0;
  v3[193] = 0;
  v3[265] = 0;
  result = sub_607872F4();
  if ( !result )
  {
    result = sub_607878A0();
    if ( !result )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = a2 + v5;
        if ( *(_BYTE *)(a2 + v5 + 20) )
        {
          v9 = FIELD_U32(v8, 28);
          v10 = FIELD_U32(v8, 32);
          memset(&buildInfo, 0, sizeof(buildInfo));
          buildInfo.profile = Profile__get(0x1BCu);
          if ( v10 == 5 )
            buildInfo.profile = Profile__get(0x1BBu);
          memset(&buildInfo.position, 0, sizeof(buildInfo.position));
          buildInfo.settings1 = (unsigned __int8)(16 * v9) | v7 | (v10 << 8) & 0xF00;
          ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
          FIELD_U8(v8, 49) = 1;
          v6 |= FIELD_U32(v8, 44) < 0x6000000u;
        }
        v5 += 72;
        ++v7;
      }
      while ( v5 != 288 );
      result = dword_60CC6D78;
      if ( **(_BYTE **)(dword_60CC6D78 + 140) )
      {
        if ( ((v6 ^ 1) & 1) == 0 )
        {
          FIELD_U8(dword_60CC6D78, 98529) = 0;
          sub_6081F524();
          return sub_6081F2E0(dword_60CC6D78);
        }
      }
    }
  }
  return result;
}
