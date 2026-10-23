/* sub_605EA31C
 * address: 0x605EA31C   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605EA31C(int *a1)
{
  void *v2; // r5
  int Model; // r0
  void *v4; // r8
  int v5; // r6
  ModelWrapper *v6; // r0

  v2 = (void *)*a1;
  if ( a1[2] == 1 )
    Model = Resource_getModel(v2, (sead__SafeString *)&dword_60CB1CB0, 6, 2, 1, 1, 0, 0, 1, 0);
  else
    Model = Resource_getModel2(v2, (sead__SafeString *)&dword_60CB1CB0, 2, 1, 1, 0, 0, 0, 0);
  v4 = (void *)Model;
  v5 = operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor((ModelWrapper *)v5, v4, 2, 1, 1, 0, 0);
  ModelWrapper_setup(v6, v2, 0, 0);
  a1[3] = v5;
  TexAnim_play(**(_DWORD **)(v5 + 20), *a1, &dword_60CB1CB8);
  if ( a1[1] == 2 )
    ShuAnim_play(**(_DWORD ***)(a1[3] + 28), *a1, &dword_60CB1CC0);
  JUMPOUT(0x605EA46C);
}
