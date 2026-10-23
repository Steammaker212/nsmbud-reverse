/* sub_60787024
 * address: 0x60787024   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60787024(int a1)
{
  unsigned int result; // r0
  _BYTE *v3; // r2

  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U8(a1, 136) = 0;
  sub_60787118();
  result = sub_6040E3D0(LevelInfo_instance);
  if ( !result )
  {
    result = sub_6040E438(LevelInfo_instance);
    if ( !result )
    {
      result = FIELD_U8(LevelInfo_instance, 17) - 38;
      if ( result >= 3 )
      {
        v3 = (_BYTE *)(dword_60C99DD4 + 272);
        if ( !dword_60C99DD4 )
          v3 = (_BYTE *)(dword_60C99DEC + 16);
        result = 0;
        v3[50] = 0;
        v3[122] = 0;
        v3[194] = 0;
        v3[266] = 0;
        v3[338] = 0;
        v3[410] = 0;
      }
    }
  }
  FIELD_U32(a1, 168) = 0;
  return result;
}
