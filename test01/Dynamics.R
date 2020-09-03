
AddNodeType("Wall","BOUNDARY") # This is needed due to bug #314

AddField(name="phi", dx=c(-1,1), dy=c(-1,1))
AddQuantity(name="Phi")
AddSetting(name="Phi", zonal=TRUE)

