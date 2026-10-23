/* sub_607FA27C
 * address: 0x607FA27C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FA27C(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r0
  int v8; // r0

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C27D5C;
  sub_607FA20C((_BYTE *)(a1 + 16));
  FIELD_U16(a1, 28) = 0;
  FIELD_U8(a1, 30) = 0;
  v6 = FIELD_U32(dword_60C99DD4, 764);
  if ( v6 != 1 )
    LOBYTE(v6) = 0;
  FIELD_U8(a1, 31) = v6;
  FIELD_U8(a1, 32) = 0;
  FIELD_U8(a1, 33) = 0;
  v7 = operator_new(0x1Cu);
  FIELD_U32(a1, 36) = sub_607FA930(v7);
  v8 = operator_new(0x4Cu);
  FIELD_U32(a1, 40) = sub_607FB104(v8, a2, a3, a1);
  EffectWrapper_ctor((EffectWrapper *)(a1 + 44));
  FIELD_U32(a1, 44) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 148));
  FIELD_U32(a1, 148) = off_60BC1450;
  if ( FIELD_U8(a1, 31) && (unsigned int)(FIELD_U32(LevelInfo_instance, 24) - 1) <= 1 )
    FIELD_U8(a1, 32) = 1;
  return a1;
}
