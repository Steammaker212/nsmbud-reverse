/* sub_60583410
 * address: 0x60583410   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60583410(int a1, int a2, int a3)
{
  float v5; // r0
  int v6; // r6
  float v7; // r1
  int *v8; // r1
  Vec3 v10; // [sp+8h] [bp-20h] BYREF

  v5 = FIELD_F32(a2, 4);
  v6 = FIELD_U32(a2, 12);
  v7 = *(float *)a2;
  v10.y = v5;
  v10.x = v7;
  AreaTask_getWrappedXPos(AreaTask_intance, v7);
  v8 = dword_60583488;
  if ( !FIELD_U8(a2, 17) )
    v8 = &dword_60583488[1];
  LODWORD(v10.z) = *v8;
  return sub_60582BA8(0, (unsigned __int8 *)a2, &v10, a3, v6, 0);
}
