/* sub_6079E3C8
 * address: 0x6079E3C8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6079E3C8(float *result, ActiveCollider *a2)
{
  float *v3; // r4
  StageActor *owner; // r5
  float CenterX; // s0
  float v6; // s2
  float v7; // s0
  bool v8; // cc

  v3 = result;
  owner = FIELD_U32(a2, 0x40);
  if ( owner )
  {
    result = (float *)(*(int (__fastcall **)(StageActor *))(FIELD_U32(owner, 0x0).vtable + 88))(owner);
    if ( result == (float *)1 )
    {
      result = (float *)(*(int (__fastcall **)(float *, StageActor *, _DWORD))(*(_DWORD *)v3 + 1432))(v3, owner, 0);
      if ( result == (float *)1 )
      {
        CenterX = ActiveCollider_getCenterX(a2);
        result = v3 + 3038;
        v6 = v3[3038];
        v7 = (float)(CenterX - v3[27]) * flt_60B0A898[*((_DWORD *)v3 + 20)];
        if ( v6 < 0.0 )
        {
          if ( v7 < v6 )
            return result;
LABEL_10:
          v3[3037] = *(float *)&FIELD_U32(owner, 0x0).id;
          *result = v7;
          return result;
        }
        v8 = v7 <= 0.0;
        if ( v7 >= 0.0 )
          v8 = v6 <= v7;
        if ( !v8 )
          goto LABEL_10;
      }
    }
  }
  return result;
}
