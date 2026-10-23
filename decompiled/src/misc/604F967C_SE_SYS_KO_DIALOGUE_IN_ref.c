/* SE_SYS_KO_DIALOGUE_IN_ref
 * address: 0x604F967C   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_KO_DIALOGUE_IN_ref(int a1)
{
  int v2; // r0
  int v3; // r1
  _DWORD *v4; // r5
  int v5; // r0
  _DWORD *v6; // r6
  int v7; // r0
  __int16 *v8; // r0
  __int16 v9; // r2
  int v10; // r2
  bool v11; // zf
  int v12; // r2
  int v13; // r0
  int v15; // [sp+4h] [bp-2Ch]
  int (**v16)(); // [sp+8h] [bp-28h] BYREF
  int v17; // [sp+Ch] [bp-24h]

  v2 = FIELD_U32(a1, 3680);
  v3 = v2;
  if ( v2 != 1 )
    v3 = 2;
  if ( !v2 )
    v3 = 0;
  sub_6050A660(*(_DWORD *)(a1 + 4 * v3 + 3668));
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA6EA4, 0);
  FIELD_U8(a1, 3688) = 0;
  FIELD_U8(a1, 3685) = 1;
  v4 = *(_DWORD **)(a1 + 4096);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v5 = v4[1];
  v16 = &sead__SafeStringBase__vtable;
  v17 = v5;
  sub_6047E0AC(&v16, FIELD_U32(a1, 3660), 0, (_DWORD *)(a1 + 4104), 0);
  v6 = *(_DWORD **)(a1 + 4096);
  (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
  v7 = v6[1];
  v16 = &sead__SafeStringBase__vtable;
  v17 = v7;
  sub_6047E0AC(&v16, FIELD_U32(a1, 3664), 0, (_DWORD *)(a1 + 4104), 0, v15);
  FIELD_U32(a1, 4100) = 1;
  v8 = *(__int16 **)(FIELD_U32(a1, 3660) + 172);
  v9 = *v8;
  FIELD_U32(a1, 4112) = 0;
  if ( v8 )
  {
    v10 = v9 & 0xFFFE;
    v11 = v10 == 14;
    if ( v10 == 14 )
      v11 = v8[1] == 21;
    if ( v11 )
    {
      if ( v8[2] == 1 )
      {
        v12 = 2;
      }
      else
      {
        if ( v8[2] )
          goto LABEL_15;
        v12 = 1;
      }
      FIELD_U32(a1, 4112) = v12;
      v13 = *((unsigned __int8 *)v8 + 8)
          | (*((unsigned __int8 *)v8 + 9) << 8)
          | (*((unsigned __int8 *)v8 + 10) << 16)
          | (*((unsigned __int8 *)v8 + 11) << 24);
      FIELD_U32(a1, 4116) = v13;
      FIELD_U32(a1, 4120) = v13;
    }
  }
LABEL_15:
  FIELD_U8(a1, 3690) = 0;
  if ( FIELD_U32(dword_60CC62E4, 84) == 2
    && *(sead_IDisposer *(__fastcall **)(int))(dword_60CC62E4 + 88) == CourseSelectTask_create
    && !FIELD_U8(dword_60CC6D78, 20) )
  {
    FIELD_U8(a1, 3690) = 1;
  }
  sub_60807EF0(SoundSystem_instance, "SE_SYS_KO_DIALOGUE_IN", 0, 1);
  return SE_SYS_HURRY_UP_ref_8164F8(dword_60CC6B68, 13);
}
