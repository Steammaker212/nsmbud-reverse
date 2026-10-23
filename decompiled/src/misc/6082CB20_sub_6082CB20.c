/* sub_6082CB20
 * address: 0x6082CB20   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082CB20(int a1, ActorBuildInfo *a2)
{
  char v4; // r0
  unsigned int v5; // r3
  char v7[28]; // [sp+1Ch] [bp-1Ch] BYREF

  Actor__ctor((Actor *)a1, a2);
  *(_DWORD *)a1 = off_60C2A784;
  v4 = 0;
  if ( (FIELD_U8(a1, 27) & 0x10) == 0 || (v4 = 1, FIELD_U32(dword_60C99DD4, 764) == 1) )
  {
    v5 = FIELD_U32(a1, 20);
    sub_607FA23C(
      v7,
      v5 & 0xF,
      (unsigned __int8)v5 >> 4,
      SBYTE1(v5),
      BYTE2(v5) & 0xF,
      (v5 >> 20) & 0xF,
      SHIBYTE(v5),
      FIELD_U8(a2, 0x21),
      FIELD_U8(a2, 0x22),
      v4);
    sub_607FC25C(dword_60CC6484, v7);
  }
  FIELD_U8(a1, 19) = 1;
  return a1;
}
