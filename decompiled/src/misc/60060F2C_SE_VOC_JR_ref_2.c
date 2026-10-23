/* SE_VOC_JR_ref_2
 * address: 0x60060F2C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_JR_ref_2(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  int result; // r0

  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
    sub_60813430(a1 + 6332, "SE_VOC_JR_AGITATE_KAMECK", 0);
  v7 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
    sub_60813430(a1 + 6332, "SE_VOC_JR_TALK_KMC1", 0);
  v9 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
    sub_60813430(a1 + 6332, "SE_VOC_JR_TALK_KMC2", 0);
  v11 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v12 )
    v11 += v12;
  result = sub_60418548(*v11 + 4);
  if ( result == 1 )
    return sub_60813430(a1 + 6332, "SE_VOC_JR_TALK_KMC3", 0);
  return result;
}
