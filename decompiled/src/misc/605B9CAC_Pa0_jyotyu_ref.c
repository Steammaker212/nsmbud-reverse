/* Pa0_jyotyu_ref
 * address: 0x605B9CAC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa0_jyotyu_ref(int a1, Vec3 *a2)
{
  int v3; // r5
  int v4; // r0
  char *v5; // r1
  int v6; // r0
  int i; // r2
  int v8; // r2
  int (**v10)(); // [sp+0h] [bp-20h] BYREF
  char *v11; // [sp+4h] [bp-1Ch]

  v3 = 0;
  v4 = sub_6071B22C(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 0);
  v10 = &sead__SafeStringBase__vtable;
  v5 = *(char **)(v4 + 4);
  v6 = 1147;
  v11 = v5;
  if ( v5 != "Pa0_jyotyu_chika" )
  {
    do
    {
      if ( v5[v3] != aPa0JyotyuChika[v3] )
        break;
      if ( !v5[v3] )
        return EffectData_create(v6, a2, 0, 0);
      ++v3;
    }
    while ( v3 < 524289 );
    v6 = 1148;
    if ( v5 != "Pa0_jyotyu_yougan" )
    {
      for ( i = 0; i < 524289; ++i )
      {
        if ( v5[i] != aPa0JyotyuYouga[i] )
          break;
        if ( !v5[i] )
          return EffectData_create(v6, a2, 0, 0);
      }
      sead__SafeStringBase__assureTerminationImpl_const();
      ((void (__fastcall *)(int (***)()))v10[3])(&v10);
      if ( v11 == "Pa0_jyotyu_yougan2" )
      {
LABEL_16:
        v6 = 1149;
      }
      else
      {
        v8 = 0;
        v6 = 870;
        do
        {
          if ( v11[v8] != aPa0JyotyuYouga_0[v8] )
            break;
          if ( !v11[v8] )
            goto LABEL_16;
          ++v8;
        }
        while ( v8 < 524289 );
      }
    }
  }
  return EffectData_create(v6, a2, 0, 0);
}
