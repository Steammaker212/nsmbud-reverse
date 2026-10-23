/* sub_605EA6F0
 * address: 0x605EA6F0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_605EA6F0(int a1)
{
  int v2; // r0
  int *v3; // r0
  int v4; // r1
  bool v5; // nf
  ModelAnimation *result; // r0
  int v7; // r1
  int v8; // r0
  void *v9; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 12));
  v2 = *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 12) + 12) + 28);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) == 0 )
      goto LABEL_7;
    v3 = (int *)(a1 + 184);
    v4 = FIELD_U32(a1, 184) + 1;
    v5 = FIELD_U32(a1, 184) - 99 < 0;
    FIELD_U32(a1, 184) = v4;
    if ( v5 == __OFSUB__(v4, 100) )
      v4 = 100;
  }
  else
  {
    v3 = (int *)(a1 + 184);
    v4 = 0;
  }
  *v3 = v4;
LABEL_7:
  sub_6040EB64(a1 + 16);
  result = (ModelAnimation *)FIELD_U8(a1, 177);
  if ( ((unsigned __int8)result & 2) == 0 )
  {
    v7 = FIELD_U32(a1, 96);
    v8 = **(_DWORD **)(FIELD_U32(a1, 12) + 20);
    if ( v7 )
    {
      FIELD_U32(a1, 96) = v7 - 1;
      FIELD_U32(v8, 24) = 0;
      return sub_6041838C((ModelAnimation *)(v8 + 4));
    }
    else
    {
      FIELD_U32(v8, 24) = 1065353216;
      result = (ModelAnimation *)FIELD_U8(v8, 28);
      if ( ((unsigned __int8)result & 0x24) != 0 )
      {
        v9 = (void *)sead__GlobalRandom__sInstance;
        if ( !FIELD_U32(a1, 8) )
          v9 = (void *)(dword_60C9CF0C + 1340);
        result = (ModelAnimation *)(((60 * (unsigned __int64)sead__Random__getU32(v9)) >> 32) + 10);
        FIELD_U32(a1, 96) = result;
      }
    }
  }
  return result;
}
