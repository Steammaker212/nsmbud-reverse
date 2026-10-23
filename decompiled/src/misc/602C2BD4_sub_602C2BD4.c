/* sub_602C2BD4
 * address: 0x602C2BD4   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602C2BD4(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r5
  int v5; // r5
  int v6; // r5
  int v7; // r5
  int v8; // r5
  int v9; // r5
  int v10; // r5
  int v11; // r5
  int v12; // r5
  _BOOL4 result; // r0
  int v14; // r5
  int v15; // r1

  v2 = (_DWORD *)(a1 + 12032);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 12032) + 8))(FIELD_U32(a1, 12032));
  if ( v3 == (*(int (**)(void))(dword_60C9131C + 8))() )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v4 == (*(int (**)(void))(dword_60C9133C + 8))() )
    return 0;
  v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v5 == (*(int (**)(void))(dword_60C9135C + 8))() )
    return 0;
  v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v6 == (*(int (**)(void))(dword_60C9137C + 8))() )
    return 0;
  v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v7 == (*(int (**)(void))(dword_60C9139C + 8))() )
    return 0;
  v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v8 == (*(int (**)(void))(dword_60C913BC + 8))() )
    return 0;
  v9 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v9 == (*(int (**)(void))(dword_60C913DC + 8))() )
    return 0;
  v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v10 == (*(int (**)(void))(dword_60C913FC + 8))() )
    return 0;
  v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v11 == (*(int (**)(void))(dword_60C9141C + 8))() )
    return 0;
  v12 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  if ( v12 == (*(int (**)(void))(dword_60C9143C + 8))() )
    return 0;
  v14 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
  v15 = (*(int (**)(void))(dword_60C9145C + 8))();
  result = 1;
  if ( v14 == v15 )
    return FIELD_U32(a1, 6504) == 0;
  return result;
}
