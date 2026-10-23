/* sub_60881158
 * address: 0x60881158   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881158(int *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int is_no_available_Emitter_instance_ref; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int *v18; // r1
  int v19; // r2
  int v20; // r6
  int v21; // r0
  int *v22; // r0
  int v23; // t1

  is_no_available_Emitter_instance_ref = There_is_no_available_Emitter_instance_ref(a1[6]);
  if ( !is_no_available_Emitter_instance_ref )
    return 0;
  v10 = a2[144];
  if ( v10 >= 1 )
    FIELD_U32(is_no_available_Emitter_instance_ref, 712) = a1[6] + 44 * v10 + 1876;
  v11 = *(_DWORD *)(a2[3] + 2340);
  if ( v11 )
  {
    v12 = a1[6];
    if ( !*(_BYTE *)(v12 + v11 + 8 + 1152) )
    {
      debugPrintRelated3("CustomShader Callback is not established. CustomShaderID : %d\n");
      goto LABEL_12;
    }
    v13 = v12 + 44 * (v11 + 8);
    v14 = 1172;
    goto LABEL_10;
  }
  v13 = a1[6];
  if ( FIELD_U8(v13, 1160) )
  {
    v14 = 1524;
LABEL_10:
    FIELD_U32(is_no_available_Emitter_instance_ref, 708) = v13 + v14;
  }
LABEL_12:
  v15 = *(_DWORD *)(a2[3] + 2400);
  if ( v15 >= 1 )
  {
    if ( a2[138] )
    {
      v16 = a1[6];
      if ( *(_BYTE *)(v16 + v15 - 1 + 1152) )
        FIELD_U32(is_no_available_Emitter_instance_ref, 704) = v16 + 44 * (v15 - 1) + 1172;
      else
        debugPrintRelated3("CustomAction Callback is not established. CustomActionID : %d\n");
    }
    else
    {
      FIELD_U32(is_no_available_Emitter_instance_ref, 116) = a1;
      nullsub_95(is_no_available_Emitter_instance_ref, 16);
    }
  }
  if ( ((int (__fastcall *)(int, int, int *, _DWORD *, int, int, int))loc_6087F280)(
         is_no_available_Emitter_instance_ref,
         *a1,
         a1,
         a2,
         a3,
         a1[106],
         a4) )
  {
    sub_6088FC7C(a1[6], is_no_available_Emitter_instance_ref);
    sub_60880ADC(is_no_available_Emitter_instance_ref, *(_DWORD *)(a2[3] + 1892));
    FIELD_U32(is_no_available_Emitter_instance_ref, 32) = a5;
    if ( *(_BYTE *)is_no_available_Emitter_instance_ref )
    {
      v17 = a4 + 4 * a5;
      FIELD_U32(is_no_available_Emitter_instance_ref, 900) = a4;
      v18 = (int *)(v17 + 832);
      v19 = FIELD_U32(v17, 832);
      if ( v19 )
      {
        FIELD_U32(v19, 120) = is_no_available_Emitter_instance_ref;
        FIELD_U32(is_no_available_Emitter_instance_ref, 124) = *v18;
        *v18 = is_no_available_Emitter_instance_ref;
      }
      else
      {
        *v18 = is_no_available_Emitter_instance_ref;
        FIELD_U32(is_no_available_Emitter_instance_ref, 124) = 0;
      }
      FIELD_U32(is_no_available_Emitter_instance_ref, 120) = 0;
      v23 = FIELD_U32(v17, 768);
      v22 = (int *)(v17 + 768);
      if ( !v23 )
        *v22 = is_no_available_Emitter_instance_ref;
    }
    else
    {
      v21 = a1[81];
      if ( v21 )
      {
        FIELD_U32(v21, 120) = is_no_available_Emitter_instance_ref;
        FIELD_U32(is_no_available_Emitter_instance_ref, 124) = a1[81];
        a1[81] = is_no_available_Emitter_instance_ref;
      }
      else
      {
        a1[81] = is_no_available_Emitter_instance_ref;
        FIELD_U32(is_no_available_Emitter_instance_ref, 124) = 0;
      }
      FIELD_U32(is_no_available_Emitter_instance_ref, 120) = 0;
      if ( !a1[80] )
        a1[80] = is_no_available_Emitter_instance_ref;
    }
    FIELD_U32(is_no_available_Emitter_instance_ref, 20) = a1[11]++;
  }
  else
  {
    v20 = 0;
    if ( FIELD_U8(is_no_available_Emitter_instance_ref, 6) )
      debugPrintRelated3("Emitter Initialize Failed.\n");
    else
      v20 = 1;
    sub_6088077C((_DWORD *)is_no_available_Emitter_instance_ref, *a1, v20);
    sub_6088FC88(a1[6], is_no_available_Emitter_instance_ref);
    return 0;
  }
  return is_no_available_Emitter_instance_ref;
}
