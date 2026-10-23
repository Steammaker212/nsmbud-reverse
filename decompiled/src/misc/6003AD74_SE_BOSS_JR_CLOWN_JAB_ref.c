/* SE_BOSS_JR_CLOWN_JAB_ref
 * address: 0x6003AD74   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_JAB_ref(int a1)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v4; // r6
  int v5; // r5

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v4 = 2;
  if ( v3 != (*(int (**)(void))(dword_60C80108 + 8))() )
  {
    v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v5 != (*(int (**)(void))(dword_60C80168 + 8))() )
    {
      v4 = 1;
      sub_60045DB4(a1, 3, 0, 1, 0.0, 1.0);
      FIELD_U32(a1, 11496) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
      FIELD_U32(a1, 11500) = 0;
      FIELD_U8(a1, 11676) = 1;
      sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_JAB", 0);
    }
  }
  FIELD_U32(a1, 11492) = v4;
  return 11492;
}
